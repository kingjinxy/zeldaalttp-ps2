	THUMB_FUNC_START sub_080ADBE4
sub_080ADBE4: @ 0x080ADBE4
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r2, r0, #24
	cmp r2, #0
	bne _080ADCEE
	ldr r3, _080ADCF8  @ =gRam
	mov r1, sp
	ldr r4, _080ADCFC  @ =0x00001844
	add r0, r3, r4
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #3
	strb r1, [r0]
	mov r1, sp
	ldr r4, _080ADD00  @ =0x00000E29
	add r0, r3, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	sub r4, r4, #10
	add r0, r3, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	ldr r4, _080ADD04  @ =0x00001818
	add r0, r3, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	ldr r1, _080ADD08  @ =0x00001810
	add r0, r3, r1
	strb r2, [r0]
	mov r0, sp
	ldrb r1, [r0]
	add r4, r4, #25
	add r0, r3, r4
	strb r1, [r0]
	mov r1, sp
	sub r4, r4, #30
	add r0, r3, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	add r4, r4, #20
	add r0, r3, r4
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #255
	strb r1, [r0]
	mov r1, sp
	add r4, r4, #16
	add r0, r3, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	ldr r4, _080ADD0C  @ =0x00000E33
	add r0, r3, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r0, sp
	ldrb r1, [r0]
	ldr r0, _080ADD10  @ =0x00000E3D
	add r4, r3, r0
	add r1, r1, r4
	ldr r2, _080ADD14  @ =0x000016D5
	add r5, r3, r2
	ldrb r0, [r5]
	lsr r0, r0, #1
	strb r0, [r1]
	mov r0, sp
	ldrb r0, [r0]
	ldr r2, _080ADD18  @ =0x00000DED
	add r1, r3, r2
	add r1, r0, r1
	ldr r2, _080ADD1C  @ =gUnknown_0816E5BC
	add r0, r0, r4
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, sp
	ldrb r0, [r0]
	ldr r2, _080ADD20  @ =0x00000DF7
	add r1, r3, r2
	add r1, r0, r1
	ldr r2, _080ADD24  @ =gUnknown_0816E5C0
	add r0, r0, r4
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	mov r4, #182
	lsl r4, r4, #5
	add r2, r3, r4
	ldr r0, _080ADD28  @ =gUnknown_0816E5C4
	ldrb r1, [r5]
	lsr r1, r1, #1
	lsl r1, r1, #1
	add r0, r1, r0
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	mov r4, #150
	lsl r4, r4, #4
	add r2, r3, r4
	strh r0, [r2]
	ldr r0, _080ADD2C  @ =0x000016C4
	add r2, r3, r0
	ldr r0, _080ADD30  @ =gUnknown_0816E5CC
	add r1, r1, r0
	ldrh r0, [r1]
	ldrh r2, [r2]
	add r0, r0, r2
	ldr r1, _080ADD34  @ =0x00000964
	add r3, r3, r1
	strh r0, [r3]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_080ADCEE:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080ADCF8:
	.4byte gRam
_080ADCFC:
	.4byte 0x00001844
_080ADD00:
	.4byte 0x00000E29
_080ADD04:
	.4byte 0x00001818
_080ADD08:
	.4byte 0x00001810
_080ADD0C:
	.4byte 0x00000E33
_080ADD10:
	.4byte 0x00000E3D
_080ADD14:
	.4byte 0x000016D5
_080ADD18:
	.4byte 0x00000DED
_080ADD1C:
	.4byte gUnknown_0816E5BC
_080ADD20:
	.4byte 0x00000DF7
_080ADD24:
	.4byte gUnknown_0816E5C0
_080ADD28:
	.4byte gUnknown_0816E5C4
_080ADD2C:
	.4byte 0x000016C4
_080ADD30:
	.4byte gUnknown_0816E5CC
_080ADD34:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080ADBE4

