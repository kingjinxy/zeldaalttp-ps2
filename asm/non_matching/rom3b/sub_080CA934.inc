	THUMB_FUNC_START sub_080CA934
sub_080CA934: @ 0x080CA934
	push {r4-r7,lr}
	ldr r0, _080CA978  @ =gRam
	ldr r1, _080CA97C  @ =0x00000952
	add r2, r0, r1
	ldrh r7, [r2]
	ldr r1, _080CA980  @ =0x00000C11
	add r0, r0, r1
	ldrb r6, [r0]
	mov r1, #255
	strb r1, [r0]
	mov r4, #21
	add r5, r2, #0
_080CA94C:
	bl sub_080CA988
	ldrh r0, [r5]
	add r0, r0, #16
	strh r0, [r5]
	lsl r0, r4, #16
	ldr r2, _080CA984  @ =0xFFFF0000
	add r0, r0, r2
	lsr r4, r0, #16
	cmp r0, #0
	bge _080CA94C
	ldr r0, _080CA978  @ =gRam
	ldr r2, _080CA980  @ =0x00000C11
	add r1, r0, r2
	strb r6, [r1]
	ldr r1, _080CA97C  @ =0x00000952
	add r0, r0, r1
	strh r7, [r0]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CA978:
	.4byte gRam
_080CA97C:
	.4byte 0x00000952
_080CA980:
	.4byte 0x00000C11
_080CA984:
	.4byte 0xFFFF0000
	THUMB_FUNC_END sub_080CA934

