	THUMB_FUNC_START sub_0810E540
sub_0810E540: @ 0x0810E540
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _0810E568  @ =gRam
	ldr r0, _0810E56C  @ =0x00000AA8
	add r5, r1, r0
	ldrh r3, [r5]
	mov r4, #128
	lsl r4, r4, #7
	add r0, r4, #0
	and r0, r0, r3
	cmp r0, #0
	beq _0810E574
	ldr r3, _0810E570  @ =0x00000F52
	add r0, r1, r3
	add r0, r2, r0
	mov r1, #0
	strb r1, [r0]
	b _0810E58E
	.byte 0x00
	.byte 0x00
_0810E568:
	.4byte gRam
_0810E56C:
	.4byte 0x00000AA8
_0810E570:
	.4byte 0x00000F52
_0810E574:
	add r0, r4, #0
	orr r0, r0, r3
	strh r0, [r5]
	ldr r0, _0810E594  @ =0x00000F52
	add r1, r1, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r2, #0
	mov r1, #70
	bl sub_0810EF44
_0810E58E:
	pop {r4,r5}
	pop {r0}
	bx r0
_0810E594:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_0810E540

