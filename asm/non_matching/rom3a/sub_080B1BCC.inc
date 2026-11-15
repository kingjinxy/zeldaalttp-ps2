	THUMB_FUNC_START sub_080B1BCC
sub_080B1BCC: @ 0x080B1BCC
	push {r4-r7,lr}
	bl sub_08069F08
	ldr r6, _080B1C98  @ =gRam
	ldr r1, _080B1C9C  @ =0x0000099D
	add r0, r6, r1
	mov r7, #0
	ldrsb r7, [r0, r7]
	cmp r7, #0
	beq _080B1BE2
	b _080B1D84
_080B1BE2:
	ldr r2, _080B1CA0  @ =0x000009D5
	add r0, r6, r2
	ldrb r1, [r0]
	ldr r5, _080B1CA4  @ =0x00001ABA
	add r0, r6, r5
	strh r1, [r0]
	ldr r0, _080B1CA8  @ =0x000009CF
	add r1, r6, r0
	mov r0, #3
	strb r0, [r1]
	ldr r1, _080B1CAC  @ =0x000009B4
	add r0, r6, r1
	ldrb r1, [r0]
	ldr r2, _080B1CB0  @ =0x00001AC5
	add r0, r6, r2
	strb r1, [r0]
	mov r5, #149
	lsl r5, r5, #4
	add r5, r5, r6
	mov r12, r5
	ldrh r1, [r5]
	sub r2, r2, #45
	add r0, r6, r2
	strh r1, [r0]
	ldr r5, _080B1CB4  @ =0x00000952
	add r4, r6, r5
	ldrh r1, [r4]
	add r2, r2, #2
	add r0, r6, r2
	strh r1, [r0]
	add r5, r5, #4
	add r3, r6, r5
	ldrh r1, [r3]
	add r2, r2, #4
	add r0, r6, r2
	strh r1, [r0]
	add r5, r5, #2
	add r2, r6, r5
	ldrh r1, [r2]
	mov r5, #213
	lsl r5, r5, #5
	add r0, r6, r5
	strh r1, [r0]
	mov r0, r12
	strh r7, [r0]
	strh r7, [r4]
	ldr r1, _080B1CB8  @ =0x00000954
	add r0, r6, r1
	strh r7, [r0]
	strh r7, [r3]
	strh r7, [r2]
	ldr r2, _080B1CBC  @ =0x0000095A
	add r0, r6, r2
	strh r7, [r0]
	ldr r5, _080B1CC0  @ =0x000009D3
	add r0, r6, r5
	ldrb r1, [r0]
	ldr r2, _080B1CC4  @ =0x00001ABC
	add r0, r6, r2
	strb r1, [r0]
	add r5, r5, #1
	add r0, r6, r5
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r6, r2
	strb r1, [r0]
	ldr r5, _080B1CC8  @ =0x0000173C
	add r1, r6, r5
	mov r0, #254
	lsl r0, r0, #1
	strh r0, [r1]
	ldr r1, _080B1CCC  @ =0x000009C6
	add r0, r6, r1
	ldrh r0, [r0]
	cmp r0, #127
	bhi _080B1CDC
	mov r2, #182
	lsl r2, r2, #5
	add r0, r6, r2
	ldrh r1, [r0]
	ldr r5, _080B1CD0  @ =0x00001A4C
	add r0, r6, r5
	strh r1, [r0]
	ldr r1, _080B1CD4  @ =0x000016C4
	add r0, r6, r1
	ldrh r1, [r0]
	ldr r2, _080B1CD8  @ =0x00001A4E
	add r0, r6, r2
	strh r1, [r0]
	b _080B1D4E
	.byte 0x00
	.byte 0x00
_080B1C98:
	.4byte gRam
_080B1C9C:
	.4byte 0x0000099D
_080B1CA0:
	.4byte 0x000009D5
_080B1CA4:
	.4byte 0x00001ABA
_080B1CA8:
	.4byte 0x000009CF
_080B1CAC:
	.4byte 0x000009B4
_080B1CB0:
	.4byte 0x00001AC5
_080B1CB4:
	.4byte 0x00000952
_080B1CB8:
	.4byte 0x00000954
_080B1CBC:
	.4byte 0x0000095A
_080B1CC0:
	.4byte 0x000009D3
_080B1CC4:
	.4byte 0x00001ABC
_080B1CC8:
	.4byte 0x0000173C
_080B1CCC:
	.4byte 0x000009C6
_080B1CD0:
	.4byte 0x00001A4C
_080B1CD4:
	.4byte 0x000016C4
_080B1CD8:
	.4byte 0x00001A4E
_080B1CDC:
	ldr r5, _080B1CF4  @ =0x000009DA
	add r0, r6, r5
	ldrh r1, [r0]
	ldr r0, _080B1CF8  @ =0x00000181
	cmp r1, r0
	beq _080B1D20
	cmp r1, r0
	bgt _080B1CFC
	sub r0, r0, #1
	cmp r1, r0
	beq _080B1D06
	b _080B1D4E
_080B1CF4:
	.4byte 0x000009DA
_080B1CF8:
	.4byte 0x00000181
_080B1CFC:
	mov r0, #193
	lsl r0, r0, #1
	cmp r1, r0
	beq _080B1D3C
	b _080B1D4E
_080B1D06:
	ldr r0, _080B1D18  @ =0x00001A4E
	add r1, r6, r0
	mov r0, #160
	strh r0, [r1]
	ldr r2, _080B1D1C  @ =0x00001A4C
	add r1, r6, r2
	mov r0, #167
	b _080B1D4C
	.byte 0x00
	.byte 0x00
_080B1D18:
	.4byte 0x00001A4E
_080B1D1C:
	.4byte 0x00001A4C
_080B1D20:
	ldr r5, _080B1D34  @ =0x00001A4E
	add r1, r6, r5
	mov r0, #181
	lsl r0, r0, #4
	strh r0, [r1]
	ldr r0, _080B1D38  @ =0x00001A4C
	add r1, r6, r0
	mov r0, #177
	lsl r0, r0, #4
	b _080B1D4C
_080B1D34:
	.4byte 0x00001A4E
_080B1D38:
	.4byte 0x00001A4C
_080B1D3C:
	ldr r2, _080B1D8C  @ =0x00001A4E
	add r1, r6, r2
	mov r0, #245
	lsl r0, r0, #4
	strh r0, [r1]
	ldr r5, _080B1D90  @ =0x00001A4C
	add r1, r6, r5
	ldr r0, _080B1D94  @ =0x00000217
_080B1D4C:
	strh r0, [r1]
_080B1D4E:
	ldr r4, _080B1D98  @ =gRam
	ldr r1, _080B1D9C  @ =0x0000165E
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #1
	bhi _080B1D6A
	ldr r2, _080B1DA0  @ =0x000009D3
	add r1, r4, r2
	mov r0, #128
	strb r0, [r1]
	ldr r5, _080B1DA4  @ =0x000009D4
	add r1, r4, r5
	mov r0, #97
	strb r0, [r1]
_080B1D6A:
	mov r0, #66
	mov r1, #0
	bl sub_0812A324
	ldr r0, _080B1DA8  @ =0x00000A3C
	add r1, r4, r0
	ldr r0, _080B1DAC  @ =0x0000FFF2
	strh r0, [r1]
	ldr r2, _080B1DB0  @ =0x00000A4C
	add r1, r4, r2
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_080B1D84:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B1D8C:
	.4byte 0x00001A4E
_080B1D90:
	.4byte 0x00001A4C
_080B1D94:
	.4byte 0x00000217
_080B1D98:
	.4byte gRam
_080B1D9C:
	.4byte 0x0000165E
_080B1DA0:
	.4byte 0x000009D3
_080B1DA4:
	.4byte 0x000009D4
_080B1DA8:
	.4byte 0x00000A3C
_080B1DAC:
	.4byte 0x0000FFF2
_080B1DB0:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_080B1BCC

