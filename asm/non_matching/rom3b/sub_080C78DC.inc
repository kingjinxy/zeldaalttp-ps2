	THUMB_FUNC_START sub_080C78DC
sub_080C78DC: @ 0x080C78DC
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080C7930  @ =gRam
	ldr r1, _080C7934  @ =0x00000ED2
	add r5, r3, r1
	add r5, r0, r5
	ldrb r1, [r5]
	ldr r2, _080C7938  @ =0x00000EF2
	add r4, r3, r2
	add r4, r0, r4
	ldrb r2, [r4]
	lsl r2, r2, #8
	ldr r7, _080C793C  @ =0x0000179A
	add r6, r3, r7
	orr r1, r1, r2
	ldrh r6, [r6]
	add r1, r1, r6
	strb r1, [r5]
	lsr r1, r1, #8
	strb r1, [r4]
	ldr r1, _080C7940  @ =0x00000EE2
	add r4, r3, r1
	add r4, r0, r4
	ldrb r1, [r4]
	ldr r5, _080C7944  @ =0x00000F02
	add r2, r3, r5
	add r0, r0, r2
	ldrb r2, [r0]
	lsl r2, r2, #8
	add r7, r7, #2
	add r3, r3, r7
	orr r1, r1, r2
	ldrh r3, [r3]
	add r1, r1, r3
	strb r1, [r4]
	lsr r1, r1, #8
	strb r1, [r0]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C7930:
	.4byte gRam
_080C7934:
	.4byte 0x00000ED2
_080C7938:
	.4byte 0x00000EF2
_080C793C:
	.4byte 0x0000179A
_080C7940:
	.4byte 0x00000EE2
_080C7944:
	.4byte 0x00000F02
	THUMB_FUNC_END sub_080C78DC

