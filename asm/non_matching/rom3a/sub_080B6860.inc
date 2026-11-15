	THUMB_FUNC_START sub_080B6860
sub_080B6860: @ 0x080B6860
	push {r4,r5,lr}
	ldr r4, _080B68D0  @ =gRam
	ldr r0, _080B68D4  @ =0x000009D3
	add r1, r4, r0
	mov r0, #128
	strb r0, [r1]
	ldr r2, _080B68D8  @ =0x000009D4
	add r1, r4, r2
	mov r0, #33
	strb r0, [r1]
	mov r0, #0
	bl sub_080B65DC
	bl sub_080B1DB4
	ldr r0, _080B68DC  @ =0x00000BB8
	add r1, r4, r0
	mov r5, #0
	mov r0, #237
	strh r0, [r1]
	ldr r1, _080B68E0  @ =0x00000BB6
	add r0, r4, r1
	mov r1, #128
	lsl r1, r1, #1
	strh r1, [r0]
	mov r2, #149
	lsl r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	ldr r0, _080B68E4  @ =0x00000956
	add r1, r4, r0
	mov r0, #226
	strh r0, [r1]
	ldr r2, _080B68E8  @ =0x00000BB4
	add r1, r4, r2
	mov r0, #187
	strb r0, [r1]
	bl sub_080B7EA4
	ldr r1, _080B68EC  @ =gUnknown_02006885
	mov r0, #2
	strb r0, [r1]
	sub r1, r1, #3
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r1, #152
	lsl r1, r1, #4
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _080B68F0  @ =0x0000099D
	add r4, r4, r2
	strb r5, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
_080B68D0:
	.4byte gRam
_080B68D4:
	.4byte 0x000009D3
_080B68D8:
	.4byte 0x000009D4
_080B68DC:
	.4byte 0x00000BB8
_080B68E0:
	.4byte 0x00000BB6
_080B68E4:
	.4byte 0x00000956
_080B68E8:
	.4byte 0x00000BB4
_080B68EC:
	.4byte gUnknown_02006885
_080B68F0:
	.4byte 0x0000099D
	THUMB_FUNC_END sub_080B6860

