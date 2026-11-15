	THUMB_FUNC_START sub_0810AE1C
sub_0810AE1C: @ 0x0810AE1C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r5, _0810AEC0  @ =gRam
	ldr r0, _0810AEC4  @ =0x00000D94
	add r1, r5, r0
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #48
	orr r0, r0, r2
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _0810AEB8
	ldr r2, _0810AEC8  @ =0x00001072
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0810AE5C
	ldr r2, _0810AECC  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
_0810AE5C:
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810AEB8
	add r0, r4, #0
	bl sub_080C5044
	ldr r1, _0810AED0  @ =0x00001042
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810AE80
	add r0, r4, #0
	bl Sprite3_Move
_0810AE80:
	add r0, r6, #0
	bl sub_080C7A20
	ldr r2, _0810AED4  @ =0x00001052
	add r1, r5, r2
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _0810AED8  @ =0x00000F92
	add r2, r5, r1
	add r2, r6, r2
	lsl r0, r0, #24
	lsr r0, r0, #27
	mov r1, #2
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _0810AEDC  @ =gUnknown_0817CA98
	ldr r2, _0810AECC  @ =0x00000F52
	add r0, r5, r2
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r6, #0
	bl _call_via_r1
_0810AEB8:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810AEC0:
	.4byte gRam
_0810AEC4:
	.4byte 0x00000D94
_0810AEC8:
	.4byte 0x00001072
_0810AECC:
	.4byte 0x00000F52
_0810AED0:
	.4byte 0x00001042
_0810AED4:
	.4byte 0x00001052
_0810AED8:
	.4byte 0x00000F92
_0810AEDC:
	.4byte gUnknown_0817CA98
	THUMB_FUNC_END sub_0810AE1C

