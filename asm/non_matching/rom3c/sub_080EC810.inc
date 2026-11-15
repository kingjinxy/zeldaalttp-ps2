	THUMB_FUNC_START sub_080EC810
sub_080EC810: @ 0x080EC810
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r0, #167
	add r1, r7, #0
	bl sub_080CA538
	add r6, r0, #0
	cmp r6, #0
	blt _080EC89C
	ldr r5, _080EC8A4  @ =gRam
	ldr r1, _080EC8A8  @ =0x00000F62
	add r0, r5, r1
	add r0, r6, r0
	mov r1, #1
	strb r1, [r0]
	lsl r4, r6, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080CAE50
	add r0, r4, #0
	mov r1, #32
	bl sub_080C35FC
	ldr r2, _080EC8AC  @ =0x00001012
	add r0, r5, r2
	add r0, r6, r0
	mov r1, #33
	strb r1, [r0]
	ldr r2, _080EC8B0  @ =0x00001172
	add r0, r5, r2
	add r0, r6, r0
	strb r1, [r0]
	ldr r0, _080EC8B4  @ =0x00001032
	add r1, r5, r0
	add r1, r6, r1
	ldrb r2, [r1]
	mov r0, #32
	orr r0, r0, r2
	strb r0, [r1]
	ldr r1, _080EC8B8  @ =0x00000E75
	add r0, r5, r1
	add r0, r6, r0
	mov r1, #64
	strb r1, [r0]
	ldr r2, _080EC8BC  @ =0x00000FC2
	add r0, r5, r2
	add r0, r6, r0
	mov r1, #16
	strb r1, [r0]
	ldr r1, _080EC8C0  @ =0x00001132
	add r0, r5, r1
	add r0, r6, r0
	mov r1, #20
	strb r1, [r0]
	ldr r2, _080EC8C4  @ =0x00001122
	add r0, r5, r2
	add r0, r6, r0
	mov r1, #7
	strb r1, [r0]
	ldr r0, _080EC8C8  @ =0x00000EA5
	add r5, r5, r0
	add r5, r6, r5
	mov r0, #32
	strb r0, [r5]
	add r0, r7, #0
	mov r1, #104
	bl sub_080CF0AC
_080EC89C:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EC8A4:
	.4byte gRam
_080EC8A8:
	.4byte 0x00000F62
_080EC8AC:
	.4byte 0x00001012
_080EC8B0:
	.4byte 0x00001172
_080EC8B4:
	.4byte 0x00001032
_080EC8B8:
	.4byte 0x00000E75
_080EC8BC:
	.4byte 0x00000FC2
_080EC8C0:
	.4byte 0x00001132
_080EC8C4:
	.4byte 0x00001122
_080EC8C8:
	.4byte 0x00000EA5
	THUMB_FUNC_END sub_080EC810

