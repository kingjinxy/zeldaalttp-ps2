	THUMB_FUNC_START sub_080D3384
sub_080D3384: @ 0x080D3384
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080D33F4  @ =gRam
	ldr r1, _080D33F8  @ =0x00000F82
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	mov r6, #0
	ldr r2, _080D33FC  @ =0x00000FD2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D33D4
	ldr r1, _080D3400  @ =0x00000A4E
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #14
	bne _080D33D4
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D33D4
	ldr r2, _080D3404  @ =0x00001788
	add r0, r5, r2
	ldr r1, [r0]
	ldr r0, _080D3408  @ =0x0002FF00
	and r1, r1, r0
	ldr r0, _080D340C  @ =0x00020200
	mov r6, #1
	cmp r1, r0
	bne _080D33D4
	mov r6, #2
_080D33D4:
	cmp r6, #2
	beq _080D3444
	cmp r6, #0
	bne _080D3466
	ldr r5, _080D33F4  @ =gRam
	ldr r1, _080D3410  @ =0x00000CB4
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D3414
	add r0, r4, #0
	mov r1, #229
	mov r2, sp
	bl sub_080C9164
	b _080D3466
_080D33F4:
	.4byte gRam
_080D33F8:
	.4byte 0x00000F82
_080D33FC:
	.4byte 0x00000FD2
_080D3400:
	.4byte 0x00000A4E
_080D3404:
	.4byte 0x00001788
_080D3408:
	.4byte 0x0002FF00
_080D340C:
	.4byte 0x00020200
_080D3410:
	.4byte 0x00000CB4
_080D3414:
	add r0, r4, #0
	mov r1, #225
	mov r2, sp
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D3466
	ldr r2, _080D343C  @ =0x00000F52
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080D3440  @ =0x00000F92
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #4
	strb r1, [r0]
	b _080D3466
_080D343C:
	.4byte 0x00000F52
_080D3440:
	.4byte 0x00000F92
_080D3444:
	add r0, r4, #0
	mov r1, #231
	mov r2, sp
	bl sub_080C9564
	ldr r1, _080D3470  @ =gRam
	ldr r2, _080D3474  @ =0x00000FD2
	add r0, r1, r2
	add r0, r4, r0
	mov r2, #96
	strb r2, [r0]
	ldr r0, _080D3478  @ =0x00000F82
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080D3466:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D3470:
	.4byte gRam
_080D3474:
	.4byte 0x00000FD2
_080D3478:
	.4byte 0x00000F82
	THUMB_FUNC_END sub_080D3384

