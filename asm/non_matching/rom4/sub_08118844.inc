	THUMB_FUNC_START sub_08118844
sub_08118844: @ 0x08118844
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _08118888  @ =gRam
	ldr r1, _0811888C  @ =0x00000E29
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #32
	bne _08118898
	ldr r2, _08118890  @ =0x00000A92
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	add r0, r4, #0
	bl sub_08122630
	bl sub_0812A0B8
	lsl r0, r0, #16
	asr r0, r0, #16
	mov r1, #1
	neg r1, r1
	cmp r0, r1
	bne _08118898
	ldr r3, _08118894  @ =0x00000A3C
	add r1, r5, r3
	mov r0, #17
	strh r0, [r1]
	add r0, r4, #0
	bl sub_08122658
	b _08118978
_08118888:
	.4byte gRam
_0811888C:
	.4byte 0x00000E29
_08118890:
	.4byte 0x00000A92
_08118894:
	.4byte 0x00000A3C
_08118898:
	ldr r0, _08118980  @ =gRam
	ldr r2, _08118984  @ =0x00000E29
	add r1, r0, r2
	add r1, r4, r1
	ldrb r1, [r1]
	add r5, r0, #0
	cmp r1, #1
	bne _0811890A
	ldr r3, _08118988  @ =0x00000DBB
	add r0, r5, r3
	add r0, r4, r0
	ldr r2, _0811898C  @ =gUnknown_0817F33E
	ldrb r1, [r2]
	strb r1, [r0]
	ldr r1, _08118990  @ =0x00000E1F
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #2
	beq _0811890A
	add r3, r3, #120
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #15
	bls _081188F4
	ldr r1, _08118994  @ =0x00001832
	add r0, r5, r1
	add r3, r4, r0
	ldrb r0, [r3]
	sub r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811890A
	mov r0, #2
	strb r0, [r3]
	ldr r3, _08118998  @ =0x00001837
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #3
	bne _081188F6
_081188F4:
	mov r1, #0
_081188F6:
	ldr r3, _08118998  @ =0x00001837
	add r0, r5, r3
	add r0, r4, r0
	strb r1, [r0]
	ldr r3, _08118988  @ =0x00000DBB
	add r0, r5, r3
	add r0, r4, r0
	add r1, r1, r2
	ldrb r1, [r1]
	strb r1, [r0]
_0811890A:
	ldr r1, _08118984  @ =0x00000E29
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	sub r0, r0, #52
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bhi _08118958
	ldr r2, _08118994  @ =0x00001832
	add r0, r5, r2
	add r3, r4, r0
	ldrb r0, [r3]
	sub r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08118958
	ldr r1, _08118998  @ =0x00001837
	add r0, r5, r1
	add r2, r4, r0
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	ldrb r1, [r2]
	cmp r1, #3
	bne _08118946
	mov r0, #0
	strb r0, [r2]
	mov r1, #0
_08118946:
	ldr r0, _0811899C  @ =gUnknown_0817F33B
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r3]
	ldr r0, _081189A0  @ =gUnknown_0817F338
	add r0, r1, r0
	ldrb r0, [r0]
	bl sub_0812FC24
_08118958:
	add r0, r4, #0
	bl sub_080C17A8
	ldr r0, _08118980  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r1, r0, r2
	ldrh r1, [r1]
	add r1, r1, #8
	mov r3, #151
	lsl r3, r3, #4
	add r0, r0, r3
	strh r1, [r0]
	add r0, r4, #0
	bl sub_081189A4
_08118978:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08118980:
	.4byte gRam
_08118984:
	.4byte 0x00000E29
_08118988:
	.4byte 0x00000DBB
_0811898C:
	.4byte gUnknown_0817F33E
_08118990:
	.4byte 0x00000E1F
_08118994:
	.4byte 0x00001832
_08118998:
	.4byte 0x00001837
_0811899C:
	.4byte gUnknown_0817F33B
_081189A0:
	.4byte gUnknown_0817F338
	THUMB_FUNC_END sub_08118844

