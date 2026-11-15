	THUMB_FUNC_START sub_080D317C
sub_080D317C: @ 0x080D317C
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	ldr r6, _080D31C8  @ =gRam
	ldr r1, _080D31CC  @ =0x00000F82
	add r0, r6, r1
	add r5, r4, r0
	mov r0, #0
	strb r0, [r5]
	ldr r1, _080D31D0  @ =0x00001663
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #8
	bne _080D31DC
	add r1, r1, #93
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #193
	bhi _080D3242
	add r0, r4, #0
	mov r1, #227
	mov r2, sp
	bl sub_080C9564
	ldr r1, _080D31D4  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #10
	strb r1, [r0]
	ldr r0, _080D31D8  @ =0x00001770
	add r1, r6, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080D3242
	.byte 0x00
	.byte 0x00
_080D31C8:
	.4byte gRam
_080D31CC:
	.4byte 0x00000F82
_080D31D0:
	.4byte 0x00001663
_080D31D4:
	.4byte 0x00000F52
_080D31D8:
	.4byte 0x00001770
_080D31DC:
	add r0, r4, #0
	bl sub_080D383C
	cmp r0, #2
	beq _080D3228
	cmp r0, #0
	bne _080D3242
	ldr r1, _080D3204  @ =0x00001662
	add r0, r6, r1
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	bne _080D3208
	add r0, r4, #0
	mov r1, #226
	mov r2, sp
	bl sub_080C9164
	b _080D3242
_080D3204:
	.4byte 0x00001662
_080D3208:
	add r0, r4, #0
	mov r1, #219
	mov r2, sp
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D3242
	ldr r1, _080D3224  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	b _080D323A
_080D3224:
	.4byte 0x00000F52
_080D3228:
	add r0, r7, #0
	mov r1, #231
	mov r2, sp
	bl sub_080C9564
	ldr r1, _080D324C  @ =0x00000FD2
	add r0, r6, r1
	add r0, r7, r0
	mov r1, #96
_080D323A:
	strb r1, [r0]
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
_080D3242:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D324C:
	.4byte 0x00000FD2
	THUMB_FUNC_END sub_080D317C

