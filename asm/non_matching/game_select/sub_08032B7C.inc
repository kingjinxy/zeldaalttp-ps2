	THUMB_FUNC_START sub_08032B7C
sub_08032B7C: @ 0x08032B7C
	push {r4-r7,lr}
	sub sp, sp, #8
	ldr r0, _08032B98  @ =gUnknown_02016D60
	ldrb r1, [r0, #1]
	add r6, r0, #0
	cmp r1, #8
	bls _08032B8C
	b _08032D6A
_08032B8C:
	lsl r0, r1, #2
	ldr r1, _08032B9C  @ =0x08032BA0
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
	.byte 0x00
	.byte 0x00
_08032B98:
	.4byte gUnknown_02016D60
_08032B9C:
	.4byte 0x08032BA0
	.4byte _08032BC4
	.4byte _08032BEC
	.4byte _08032C14
	.4byte _08032C4C
	.4byte _08032C80
	.4byte _08032C9C
	.4byte _08032CD8
	.4byte _08032D04
	.4byte _08032D1E
_08032BC4:
	ldrh r0, [r6, #4]
	sub r0, r0, #1
	strh r0, [r6, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _08032BD2
	b _08032D6A
_08032BD2:
	ldrb r0, [r6, #1]
	add r0, r0, #1
	strb r0, [r6, #1]
	mov r0, #12
	strh r0, [r6, #4]
	ldr r0, _08032BE8  @ =gUnknown_0202A7E0
	ldr r0, [r0, #12]
	add r0, r0, #42
	mov r1, #6
	strb r1, [r0]
	b _08032D6A
_08032BE8:
	.4byte gUnknown_0202A7E0
_08032BEC:
	ldrh r0, [r6, #4]
	sub r0, r0, #1
	strh r0, [r6, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _08032BFA
	b _08032D6A
_08032BFA:
	ldrb r0, [r6, #1]
	add r0, r0, #1
	strb r0, [r6, #1]
	mov r0, #120
	strh r0, [r6, #4]
	ldr r0, _08032C10  @ =gUnknown_03006A30
	ldr r0, [r0, #40]
	add r0, r0, #42
	mov r1, #2
	strb r1, [r0]
	b _08032D6A
_08032C10:
	.4byte gUnknown_03006A30
_08032C14:
	ldrh r0, [r6, #4]
	sub r0, r0, #1
	strh r0, [r6, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _08032C22
	b _08032D6A
_08032C22:
	ldrb r0, [r6, #1]
	add r0, r0, #1
	strb r0, [r6, #1]
	mov r0, #30
	strh r0, [r6, #4]
	ldr r2, _08032C48  @ =gUnknown_0202A7E0
	mov r0, #2
	strb r0, [r2, #4]
	mov r3, #128
	strb r3, [r2, #5]
	mov r0, #16
	strb r0, [r2, #6]
	ldr r0, [r2, #12]
	add r0, r0, #42
	mov r1, #4
	strb r1, [r0]
	ldr r0, [r2, #12]
	str r3, [r0, #12]
	b _08032D6A
_08032C48:
	.4byte gUnknown_0202A7E0
_08032C4C:
	ldrh r0, [r6, #4]
	sub r0, r0, #1
	strh r0, [r6, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _08032C5A
	b _08032D6A
_08032C5A:
	ldrb r0, [r6, #1]
	add r0, r0, #1
	strb r0, [r6, #1]
	mov r0, #180
	strh r0, [r6, #4]
	ldr r0, _08032C7C  @ =gUnknown_03006A30
	ldr r0, [r0, #40]
	add r0, r0, #42
	mov r1, #4
	strb r1, [r0]
	mov r0, #0
	mov r1, #64
	mov r2, #0
	bl sub_08063D28
	b _08032D6A
	.byte 0x00
	.byte 0x00
_08032C7C:
	.4byte gUnknown_03006A30
_08032C80:
	ldrh r0, [r6, #4]
	sub r0, r0, #1
	strh r0, [r6, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08032D6A
	ldrb r0, [r6, #1]
	add r0, r0, #1
	strb r0, [r6, #1]
	mov r0, #40
	strh r0, [r6, #4]
	bl sub_08032D88
	b _08032D6A
_08032C9C:
	ldrh r0, [r6, #4]
	sub r0, r0, #1
	strh r0, [r6, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08032D6A
	ldrb r0, [r6, #1]
	add r0, r0, #1
	strb r0, [r6, #1]
	mov r0, #40
	strh r0, [r6, #4]
	ldr r1, _08032CCC  @ =gUnknown_03000520
	ldr r0, _08032CD0  @ =0xFFEFFFFF
	str r0, [r1, #12]
	mov r0, #1
	mov r1, #2
	bl sub_0800C0B0
	ldr r2, _08032CD4  @ =gUnknown_0201F000
	ldr r0, [r2]
	mov r1, #16
	orr r0, r0, r1
	str r0, [r2]
	b _08032D6A
_08032CCC:
	.4byte gUnknown_03000520
_08032CD0:
	.4byte 0xFFEFFFFF
_08032CD4:
	.4byte gUnknown_0201F000
_08032CD8:
	ldrh r0, [r6, #4]
	sub r0, r0, #1
	strh r0, [r6, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08032D6A
	ldrb r0, [r6, #1]
	add r0, r0, #1
	strb r0, [r6, #1]
	mov r0, #120
	strh r0, [r6, #4]
	mov r0, #90
	mov r1, #5
	mov r2, #0
	bl sub_0804C8A8
	ldr r0, _08032D00  @ =0x800B01A0
	bl play_sound
	b _08032D6A
_08032D00:
	.4byte 0x800B01A0
_08032D04:
	ldrh r0, [r6, #4]
	sub r0, r0, #1
	strh r0, [r6, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08032D6A
	ldrb r0, [r6, #1]
	add r0, r0, #1
	strb r0, [r6, #1]
	mov r0, #150
	lsl r0, r0, #1
	strh r0, [r6, #4]
	b _08032D6A
_08032D1E:
	ldrh r0, [r6, #4]
	sub r0, r0, #1
	mov r7, #0
	strh r0, [r6, #4]
	lsl r0, r0, #16
	lsr r5, r0, #16
	cmp r5, #0
	bne _08032D6A
	str r5, [sp]
	ldr r4, _08032D74  @ =gPaletteBuf2
	ldr r2, _08032D78  @ =0x010000A0
	mov r0, sp
	add r1, r4, #0
	bl CpuFastSet
	str r5, [sp, #4]
	add r0, sp, #4
	mov r1, #168
	lsl r1, r1, #2
	add r4, r4, r1
	ldr r2, _08032D7C  @ =0x01000058
	add r1, r4, #0
	bl CpuFastSet
	ldr r1, _08032D80  @ =gUnknown_03000520
	mov r0, #1
	neg r0, r0
	str r0, [r1, #12]
	mov r0, #1
	mov r1, #2
	bl sub_0800C0B0
	ldr r1, _08032D84  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	strb r7, [r6, #1]
	strb r7, [r6]
_08032D6A:
	add sp, sp, #8
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08032D74:
	.4byte gPaletteBuf2
_08032D78:
	.4byte 0x010000A0
_08032D7C:
	.4byte 0x01000058
_08032D80:
	.4byte gUnknown_03000520
_08032D84:
	.4byte gSubState
	THUMB_FUNC_END sub_08032B7C

