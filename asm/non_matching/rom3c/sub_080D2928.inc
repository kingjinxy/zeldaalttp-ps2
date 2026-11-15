	THUMB_FUNC_START sub_080D2928
sub_080D2928: @ 0x080D2928
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080D2954  @ =gRam
	ldr r1, _080D2958  @ =0x00001AE2
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D2960
	add r0, r4, #0
	mov r1, #234
	mov r2, sp
	bl sub_080C9564
	ldr r1, _080D295C  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	b _080D2976
	.byte 0x00
	.byte 0x00
_080D2954:
	.4byte gRam
_080D2958:
	.4byte 0x00001AE2
_080D295C:
	.4byte 0x00000F52
_080D2960:
	add r0, r4, #0
	mov r1, #233
	mov r2, sp
	bl sub_080C9564
	ldr r0, _080D2980  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080D2976:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D2980:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D2928

