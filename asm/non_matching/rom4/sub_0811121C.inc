	THUMB_FUNC_START sub_0811121C
sub_0811121C: @ 0x0811121C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _0811125C  @ =gRam
	ldr r2, _08111260  @ =0x00000F52
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #1
	strb r2, [r1]
	ldr r5, _08111264  @ =0x00000545
	add r4, r3, r5
	ldr r2, _08111268  @ =gUnknown_0817D4C4
	ldr r5, _0811126C  @ =0x00000FB2
	add r1, r3, r5
	add r1, r0, r1
	ldrb r1, [r1]
	add r1, r1, r2
	ldrb r2, [r4]
	ldrb r1, [r1]
	and r1, r1, r2
	mov r2, #150
	lsl r2, r2, #4
	add r3, r3, r2
	strb r1, [r3]
	mov r1, #2
	mov r2, #0
	bl sub_08110BD8
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811125C:
	.4byte gRam
_08111260:
	.4byte 0x00000F52
_08111264:
	.4byte 0x00000545
_08111268:
	.4byte gUnknown_0817D4C4
_0811126C:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_0811121C

