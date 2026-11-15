	THUMB_FUNC_START sub_0809E624
sub_0809E624: @ 0x0809E624
	push {lr}
	mov r2, #2
	ldr r1, _0809E648  @ =gRam
	ldr r3, _0809E64C  @ =0x00001718
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #5
	bne _0809E636
	mov r2, #1
_0809E636:
	mov r3, #150
	lsl r3, r3, #4
	add r0, r1, r3
	strb r2, [r0]
	bl sub_0809A138
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809E648:
	.4byte gRam
_0809E64C:
	.4byte 0x00001718
	THUMB_FUNC_END sub_0809E624

