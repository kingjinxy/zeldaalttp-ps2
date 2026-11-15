	THUMB_FUNC_START sub_080A1F20
sub_080A1F20: @ 0x080A1F20
	push {r4-r6,lr}
	ldr r2, _080A1F94  @ =gRam
	ldr r1, _080A1F98  @ =0x000009AD
	add r0, r2, r1
	ldr r4, _080A1F9C  @ =0x00001770
	add r3, r2, r4
	ldrb r1, [r0]
	ldrb r0, [r3]
	orr r1, r1, r0
	ldr r3, _080A1FA0  @ =0x00001605
	add r0, r2, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	add r4, r2, #0
	cmp r1, #0
	beq _080A1F42
	b _080A20D0
_080A1F42:
	ldr r1, _080A1FA4  @ =0x000016D5
	add r0, r4, r1
	ldrb r5, [r0]
	add r3, r3, #191
	add r2, r4, r3
	ldr r0, _080A1FA8  @ =gUnknown_08169088
	lsr r1, r5, #1
	lsl r1, r1, #1
	add r0, r1, r0
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	mov r3, #150
	lsl r3, r3, #4
	add r2, r4, r3
	mov r3, #0
	strh r0, [r2]
	mov r0, #182
	lsl r0, r0, #5
	add r2, r4, r0
	ldr r0, _080A1FAC  @ =gUnknown_08169090
	add r1, r1, r0
	ldrh r0, [r1]
	ldrh r2, [r2]
	add r0, r0, r2
	ldr r2, _080A1FB0  @ =0x00000964
	add r1, r4, r2
	strh r0, [r1]
	mov r1, #161
	lsl r1, r1, #4
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A1FB4
	add r2, r2, #5
	add r0, r4, r2
	strb r3, [r0]
	sub r1, r1, #164
	add r0, r4, r1
	strb r3, [r0]
	b _080A1FC2
_080A1F94:
	.4byte gRam
_080A1F98:
	.4byte 0x000009AD
_080A1F9C:
	.4byte 0x00001770
_080A1FA0:
	.4byte 0x00001605
_080A1FA4:
	.4byte 0x000016D5
_080A1FA8:
	.4byte gUnknown_08169088
_080A1FAC:
	.4byte gUnknown_08169090
_080A1FB0:
	.4byte 0x00000964
_080A1FB4:
	ldr r2, _080A2018  @ =0x00000969
	add r0, r4, r2
	strb r3, [r0]
	ldr r3, _080A201C  @ =0x0000096C
	add r1, r4, r3
	mov r0, #16
	strb r0, [r1]
_080A1FC2:
	ldr r1, _080A2020  @ =0x000009B2
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080A2030
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	ldrh r0, [r0]
	ldr r2, _080A2024  @ =0x000001FF
	and r2, r2, r0
	lsr r2, r2, #3
	ldr r3, _080A2028  @ =0x00000968
	add r0, r4, r3
	strh r2, [r0]
	sub r1, r1, #78
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #252
	lsl r0, r0, #1
	and r0, r0, r1
	lsl r0, r0, #3
	add r2, r2, r0
	add r3, r3, #1
	add r0, r4, r3
	mov r1, #0
	ldrsb r1, [r0, r1]
	add r1, r1, r2
	ldr r2, _080A201C  @ =0x0000096C
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r3, r1, #16
	ldr r4, _080A202C  @ =gUnknown_0200CBA0
	add r0, r3, r4
	ldrb r3, [r0]
	b _080A204C
_080A2018:
	.4byte 0x00000969
_080A201C:
	.4byte 0x0000096C
_080A2020:
	.4byte 0x000009B2
_080A2024:
	.4byte 0x000001FF
_080A2028:
	.4byte 0x00000968
_080A202C:
	.4byte gUnknown_0200CBA0
_080A2030:
	ldr r0, _080A20D8  @ =0x00000964
	add r2, r4, r0
	ldrh r3, [r2]
	sub r0, r0, #4
	add r1, r4, r0
	ldrh r0, [r1]
	strh r0, [r2]
	strh r3, [r1]
	ldrh r0, [r2]
	ldrh r1, [r1]
	bl sub_080C8F6C
	lsl r0, r0, #24
	lsr r3, r0, #24
_080A204C:
	add r0, r3, #0
	sub r0, r0, #8
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #1
	bhi _080A20D0
	add r0, r5, #0
	bl sub_080C969C
	add r6, r0, #0
	cmp r6, #0
	blt _080A20D0
	ldr r2, _080A20DC  @ =gRam
	ldr r1, _080A20E0  @ =0x000016D5
	add r0, r2, r1
	ldrb r5, [r0]
	mov r3, #182
	lsl r3, r3, #5
	add r1, r2, r3
	ldr r0, _080A20E4  @ =gUnknown_08169090
	lsr r3, r5, #1
	lsl r3, r3, #1
	add r0, r3, r0
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	sub r0, r0, #16
	ldr r4, _080A20E8  @ =0x00000ED2
	add r1, r2, r4
	add r1, r6, r1
	mov r5, #0
	strb r0, [r1]
	add r4, r4, #32
	add r1, r2, r4
	add r1, r6, r1
	lsr r0, r0, #8
	strb r0, [r1]
	ldr r0, _080A20EC  @ =0x000016C4
	add r4, r2, r0
	ldr r0, _080A20F0  @ =gUnknown_08169088
	add r3, r3, r0
	ldrh r1, [r3]
	ldrh r4, [r4]
	add r1, r1, r4
	sub r1, r1, #8
	ldr r3, _080A20F4  @ =0x00000EE2
	add r0, r2, r3
	add r0, r6, r0
	strb r1, [r0]
	ldr r4, _080A20F8  @ =0x00000F02
	add r0, r2, r4
	add r0, r6, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _080A20FC  @ =0x000010F2
	add r0, r2, r1
	add r0, r6, r0
	mov r3, #161
	lsl r3, r3, #4
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r4, _080A2100  @ =0x00001142
	add r2, r2, r4
	add r2, r6, r2
	strb r5, [r2]
_080A20D0:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A20D8:
	.4byte 0x00000964
_080A20DC:
	.4byte gRam
_080A20E0:
	.4byte 0x000016D5
_080A20E4:
	.4byte gUnknown_08169090
_080A20E8:
	.4byte 0x00000ED2
_080A20EC:
	.4byte 0x000016C4
_080A20F0:
	.4byte gUnknown_08169088
_080A20F4:
	.4byte 0x00000EE2
_080A20F8:
	.4byte 0x00000F02
_080A20FC:
	.4byte 0x000010F2
_080A2100:
	.4byte 0x00001142
	THUMB_FUNC_END sub_080A1F20

