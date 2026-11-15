	THUMB_FUNC_START sub_080D5EB0
sub_080D5EB0: @ 0x080D5EB0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r5, _080D5F10  @ =gRam
	ldr r1, _080D5F14  @ =0x00001172
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C5044
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r2, _080D5F18  @ =0x00000FB2
	add r1, r5, r2
	add r1, r4, r1
	strb r0, [r1]
	add r2, r2, #208
	add r1, r5, r2
	add r1, r4, r1
	strb r0, [r1]
	ldr r1, _080D5F1C  @ =0x00000FC2
	add r0, r5, r1
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _080D5EFC
	sub r1, r1, #112
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #127
	strb r0, [r2]
_080D5EFC:
	ldr r2, _080D5F20  @ =0x00001032
	add r0, r5, r2
	add r0, r6, r0
	ldrb r2, [r0]
	mov r1, #191
	and r1, r1, r2
	strb r1, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
_080D5F10:
	.4byte gRam
_080D5F14:
	.4byte 0x00001172
_080D5F18:
	.4byte 0x00000FB2
_080D5F1C:
	.4byte 0x00000FC2
_080D5F20:
	.4byte 0x00001032
	THUMB_FUNC_END sub_080D5EB0

