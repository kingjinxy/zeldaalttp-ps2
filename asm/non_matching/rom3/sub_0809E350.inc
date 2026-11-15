	THUMB_FUNC_START sub_0809E350
sub_0809E350: @ 0x0809E350
	push {lr}
	mov r0, #4
	mov r1, #35
	bl sub_081167A0
	mov r0, #21
	bl sub_0809E43C
	ldr r1, _0809E384  @ =gRam
	ldr r0, _0809E388  @ =0x0000176E
	add r3, r1, r0
	mov r2, #0
	mov r0, #32
	strb r0, [r3]
	ldr r3, _0809E38C  @ =0x0000180D
	add r0, r1, r3
	strb r2, [r0]
	sub r3, r3, #253
	add r0, r1, r3
	strb r2, [r0]
	ldr r0, _0809E390  @ =0x000017F1
	add r1, r1, r0
	strb r2, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809E384:
	.4byte gRam
_0809E388:
	.4byte 0x0000176E
_0809E38C:
	.4byte 0x0000180D
_0809E390:
	.4byte 0x000017F1
	THUMB_FUNC_END sub_0809E350

