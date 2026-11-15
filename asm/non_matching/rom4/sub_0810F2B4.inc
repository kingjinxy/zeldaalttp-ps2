	THUMB_FUNC_START sub_0810F2B4
sub_0810F2B4: @ 0x0810F2B4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_080C6340
	add r0, r5, #0
	bl sub_080C6240
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810F30C
	add r0, r5, #0
	bl sub_080C5080
	ldr r2, _0810F314  @ =gRam
	ldr r0, _0810F318  @ =0x00001122
	add r4, r2, r0
	add r4, r5, r4
	ldr r1, _0810F31C  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	lsl r1, r1, #3
	mov r0, #64
	and r1, r1, r0
	ldrb r3, [r4]
	mov r0, #63
	and r0, r0, r3
	orr r1, r1, r0
	strb r1, [r4]
	ldr r1, _0810F320  @ =gUnknown_0817D084
	ldr r0, _0810F324  @ =0x00000F52
	add r2, r2, r0
	add r2, r5, r2
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
_0810F30C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810F314:
	.4byte gRam
_0810F318:
	.4byte 0x00001122
_0810F31C:
	.4byte 0x00000996
_0810F320:
	.4byte gUnknown_0817D084
_0810F324:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_0810F2B4

