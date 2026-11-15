	THUMB_FUNC_START sub_080D61D0
sub_080D61D0: @ 0x080D61D0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r5, _080D6210  @ =gRam
	ldr r1, _080D6214  @ =0x00001172
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C5044
	ldr r1, _080D6218  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D6202
	ldr r0, _080D621C  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080D6202:
	add r0, r6, #0
	bl sub_080D6220
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D6210:
	.4byte gRam
_080D6214:
	.4byte 0x00001172
_080D6218:
	.4byte 0x00000FC2
_080D621C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D61D0

