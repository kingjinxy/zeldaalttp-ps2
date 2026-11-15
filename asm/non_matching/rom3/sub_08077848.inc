	THUMB_FUNC_START sub_08077848
sub_08077848: @ 0x08077848
	push {r4-r6,lr}
	ldr r1, _080778EC  @ =gUnknown_0814FC30
	ldr r6, _080778F0  @ =gRam
	ldr r2, _080778F4  @ =0x000009C6
	add r0, r6, r2
	ldrh r0, [r0]
	add r0, r0, r1
	ldrb r5, [r0]
	ldr r4, _080778F8  @ =gUnknown_0814FCC0
	lsl r0, r5, #2
	add r0, r0, r4
	ldr r0, [r0]
	ldr r1, _080778FC  @ =gUnknown_02018000
	bl LZ77UnCompWram
	add r0, r5, #1
	lsl r0, r0, #2
	add r0, r0, r4
	ldr r0, [r0]
	ldr r1, _08077900  @ =gUnknown_0201A000
	bl LZ77UnCompWram
	add r0, r5, #0
	add r0, r0, #8
	lsl r0, r0, #2
	add r0, r0, r4
	ldr r0, [r0]
	ldr r1, _08077904  @ =gUnknown_0201C000
	bl LZ77UnCompWram
	add r0, r5, #0
	add r0, r0, #9
	lsl r0, r0, #2
	add r0, r0, r4
	ldr r0, [r0]
	ldr r1, _08077908  @ =gUnknown_0201E000
	bl LZ77UnCompWram
	cmp r5, #24
	bne _08077954
	ldr r1, _0807790C  @ =0x0000098E
	add r0, r6, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #3
	beq _080778AE
	cmp r0, #5
	beq _080778AE
	cmp r0, #6
	bne _08077930
_080778AE:
	ldr r1, _08077910  @ =gUnknown_02019D38
	ldr r2, _08077914  @ =0x0000213F
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #2
	ldr r2, _08077918  @ =0x0000253F
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #62
	ldr r2, _0807791C  @ =0x0000293F
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #2
	ldr r2, _08077920  @ =0x00002D3F
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _08077924  @ =gUnknown_0201B508
	ldr r2, _08077928  @ =0x0000216F
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #2
	sub r2, r2, #50
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #62
	ldr r2, _0807792C  @ =0x0000296F
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #2
	sub r2, r2, #50
	b _08077950
_080778EC:
	.4byte gUnknown_0814FC30
_080778F0:
	.4byte gRam
_080778F4:
	.4byte 0x000009C6
_080778F8:
	.4byte gUnknown_0814FCC0
_080778FC:
	.4byte gUnknown_02018000
_08077900:
	.4byte gUnknown_0201A000
_08077904:
	.4byte gUnknown_0201C000
_08077908:
	.4byte gUnknown_0201E000
_0807790C:
	.4byte 0x0000098E
_08077910:
	.4byte gUnknown_02019D38
_08077914:
	.4byte 0x0000213F
_08077918:
	.4byte 0x0000253F
_0807791C:
	.4byte 0x0000293F
_08077920:
	.4byte 0x00002D3F
_08077924:
	.4byte gUnknown_0201B508
_08077928:
	.4byte 0x0000216F
_0807792C:
	.4byte 0x0000296F
_08077930:
	cmp r0, #4
	bne _08077954
	ldr r1, _08077998  @ =gUnknown_0201B508
	ldr r2, _0807799C  @ =0x0000213F
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #2
	ldr r2, _080779A0  @ =0x0000253F
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #62
	ldr r2, _080779A4  @ =0x0000293F
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #2
	ldr r2, _080779A8  @ =0x00002D3F
_08077950:
	add r0, r2, #0
	strh r0, [r1]
_08077954:
	ldr r4, _080779AC  @ =gUnknown_0814FF40
	lsl r0, r5, #2
	add r0, r0, r4
	ldr r0, [r0]
	ldr r1, _080779B0  @ =gUnknown_02020000
	bl LZ77UnCompWram
	add r0, r5, #1
	lsl r0, r0, #2
	add r0, r0, r4
	ldr r0, [r0]
	ldr r1, _080779B4  @ =gUnknown_02022000
	bl LZ77UnCompWram
	add r0, r5, #0
	add r0, r0, #8
	lsl r0, r0, #2
	add r0, r0, r4
	ldr r0, [r0]
	ldr r1, _080779B8  @ =gUnknown_02024000
	bl LZ77UnCompWram
	add r0, r5, #0
	add r0, r0, #9
	lsl r0, r0, #2
	add r0, r0, r4
	ldr r0, [r0]
	ldr r1, _080779BC  @ =gUnknown_02026000
	bl LZ77UnCompWram
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08077998:
	.4byte gUnknown_0201B508
_0807799C:
	.4byte 0x0000213F
_080779A0:
	.4byte 0x0000253F
_080779A4:
	.4byte 0x0000293F
_080779A8:
	.4byte 0x00002D3F
_080779AC:
	.4byte gUnknown_0814FF40
_080779B0:
	.4byte gUnknown_02020000
_080779B4:
	.4byte gUnknown_02022000
_080779B8:
	.4byte gUnknown_02024000
_080779BC:
	.4byte gUnknown_02026000
	THUMB_FUNC_END sub_08077848

