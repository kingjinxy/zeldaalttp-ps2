	THUMB_FUNC_START sub_080F11D4
sub_080F11D4: @ 0x080F11D4
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F1284
	ldr r5, _080F122C  @ =gRam
	ldr r1, _080F1230  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #2
	bhi _080F127E
	ldr r2, _080F1234  @ =0x000009B2
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080F123C
	add r0, r4, #0
	bl sub_080C90F4
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080F1238  @ =0x00001082
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #3
	eor r2, r2, r1
	strb r2, [r0]
	add r0, r4, #0
	mov r1, #176
	mov r2, sp
	bl sub_080C9164
	b _080F1284
_080F122C:
	.4byte gRam
_080F1230:
	.4byte 0x00000F52
_080F1234:
	.4byte 0x000009B2
_080F1238:
	.4byte 0x00001082
_080F123C:
	cmp r1, #0
	bne _080F1264
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F1264
	add r0, r4, #0
	bl sub_080C2FA8
	mov r1, #3
	eor r0, r0, r1
	ldr r2, _080F1260  @ =0x00000FB2
	add r1, r5, r2
	add r1, r4, r1
	strb r0, [r1]
	b _080F1270
_080F1260:
	.4byte 0x00000FB2
_080F1264:
	add r0, r4, #0
	bl sub_080C90F4
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F1278
_080F1270:
	add r0, r4, #0
	bl sub_080F17B0
	b _080F1284
_080F1278:
	add r0, r4, #0
	bl Sprite3_Move
_080F127E:
	add r0, r4, #0
	bl sub_080F17D4
_080F1284:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080F11D4

