	THUMB_FUNC_START sub_080DF890
sub_080DF890: @ 0x080DF890
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080DF8F4  @ =gRam
	ldr r0, _080DF8F8  @ =0x00001AE2
	add r1, r6, r0
	ldr r2, _080DF8FC  @ =0x00000F92
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r0, _080DF900  @ =gUnknown_08176688
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r2, _080DF904  @ =0x00001AED
	add r0, r6, r2
	strb r1, [r0]
	ldr r0, _080DF908  @ =gUnknown_0817668C
	add r0, r7, r0
	ldrb r0, [r0]
	mov r1, #150
	lsl r1, r1, #4
	add r5, r6, r1
	strh r0, [r5]
	bl sub_080AA868
	mov r2, #0
	ldrsh r1, [r5, r2]
	cmp r0, r1
	bge _080DF918
	add r0, r4, #0
	ldr r1, _080DF90C  @ =0x0000014F
	mov r2, sp
	bl sub_080C9564
	ldr r1, _080DF910  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	ldr r2, _080DF914  @ =0x00000FC2
	add r0, r6, r2
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
	b _080DF936
_080DF8F4:
	.4byte gRam
_080DF8F8:
	.4byte 0x00001AE2
_080DF8FC:
	.4byte 0x00000F92
_080DF900:
	.4byte gUnknown_08176688
_080DF904:
	.4byte 0x00001AED
_080DF908:
	.4byte gUnknown_0817668C
_080DF90C:
	.4byte 0x0000014F
_080DF910:
	.4byte 0x00000F52
_080DF914:
	.4byte 0x00000FC2
_080DF918:
	ldr r1, _080DF940  @ =0x00000FB2
	add r0, r6, r1
	add r0, r4, r0
	ldrh r1, [r5]
	strb r1, [r0]
	ldr r2, _080DF944  @ =0x00001082
	add r0, r6, r2
	add r0, r4, r0
	strb r7, [r0]
	ldr r0, _080DF948  @ =0x00000F52
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080DF936:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DF940:
	.4byte 0x00000FB2
_080DF944:
	.4byte 0x00001082
_080DF948:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DF890

