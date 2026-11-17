	THUMB_FUNC_START sub_08010E90
sub_08010E90: @ 0x08010E90
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	mov r6, #0
	str r6, [sp]
	ldr r4, _08010F3C  @ =gBG0Buffer
	ldr r2, _08010F40  @ =0x01000140
	mov r0, sp
	add r1, r4, #0
	bl CpuFastSet
	ldr r0, _08010F44  @ =0x0600E800
	mov r2, #160
	lsl r2, r2, #3
	add r1, r4, #0
	bl sub_080009F4
	mov r0, r8
	bl sub_080111F8
	lsl r0, r0, #24
	cmp r0, #0
	bne _08010ECC
	b _0801110E
_08010ECC:
	ldr r0, _08010F48  @ =0x03000030
	ldr r0, [r0]
	ldr r1, _08010F4C  @ =0x000A4890
	add r0, r0, r1
	add r1, r4, #0
	bl LZ77UnCompWram
	mov r0, r8
	bl sub_08010E04
	ldr r1, _08010F50  @ =gUnknown_0200B250
	mov r3, r8
	lsl r2, r3, #6
	add r1, r2, r1
	ldr r1, [r1]
	and r1, r1, r0
	lsl r1, r1, #16
	lsr r7, r1, #16
	add r5, r4, #0
	add r5, r5, #78
	mov r0, #128
	and r0, r0, r7
	mov r10, r2
	cmp r0, #0
	bne _08010F0E
	add r1, r4, #0
	add r1, r1, #142
	add r0, r4, #0
	add r0, r0, #144
	strh r6, [r0]
	strh r6, [r1]
	strh r6, [r5, #2]
	strh r6, [r5]
_08010F0E:
	mov r0, #64
	and r0, r0, r7
	cmp r0, #0
	bne _08010F26
	add r1, r4, #0
	add r1, r1, #146
	add r0, r4, #0
	add r0, r0, #148
	strh r6, [r0]
	strh r6, [r1]
	strh r6, [r5, #6]
	strh r6, [r5, #4]
_08010F26:
	add r5, r4, #0
	add r5, r5, #98
	mov r0, #48
	and r0, r0, r7
	cmp r0, #16
	beq _08010F7E
	cmp r0, #16
	bgt _08010F54
	cmp r0, #0
	beq _08010F5A
	b _08010F8E
_08010F3C:
	.4byte gBG0Buffer
_08010F40:
	.4byte 0x01000140
_08010F44:
	.4byte 0x0600E800
_08010F48:
	.4byte 0x03000030
_08010F4C:
	.4byte 0x000A4890
_08010F50:
	.4byte gUnknown_0200B250
_08010F54:
	cmp r0, #32
	beq _08010F6A
	b _08010F8E
_08010F5A:
	strh r6, [r5, #2]
	strh r6, [r5]
	add r1, r4, #0
	add r1, r1, #162
	add r0, r4, #0
	add r0, r0, #164
	strh r6, [r0]
	strh r6, [r1]
_08010F6A:
	mov r0, #0
	strh r0, [r5, #6]
	strh r0, [r5, #4]
	add r2, r5, #0
	add r2, r2, #68
	add r1, r5, #0
	add r1, r1, #70
	strh r0, [r1]
	strh r0, [r2]
	b _08010F8E
_08010F7E:
	strh r6, [r5, #2]
	strh r6, [r5]
	add r1, r4, #0
	add r1, r1, #162
	add r0, r4, #0
	add r0, r0, #164
	strh r6, [r0]
	strh r6, [r1]
_08010F8E:
	ldr r0, _080110C4  @ =gUnknown_0200B250
	mov r6, r10
	add r1, r6, r0
	ldr r2, [r1]
	mov r1, #128
	lsl r1, r1, #2
	and r2, r2, r1
	cmp r2, #0
	bne _08010FB0
	ldr r5, _080110C8  @ =gUnknown_0202D1F0
	add r0, r5, #0
	add r0, r0, #64
	strh r2, [r0]
	strh r2, [r5]
	add r0, r0, #2
	strh r2, [r0]
	strh r2, [r5, #2]
_08010FB0:
	mov r0, #192
	and r7, r7, r0
	ldr r2, _080110CC  @ =gUnknown_0202D23A
	ldrh r6, [r2]
	ldr r0, _080110D0  @ =gUnknown_0202A6F0
	mov r3, r8
	lsl r1, r3, #4
	add r3, r1, r0
	ldrh r4, [r3]
	ldr r0, _080110D4  @ =0x0000FFFF
	mov r9, r2
	str r1, [sp, #4]
	cmp r4, r0
	beq _08011014
	mov r0, #15
	ldrsb r0, [r3, r0]
	cmp r0, #0
	ble _08011014
	ldr r0, _080110D8  @ =0x000003E7
	cmp r4, r0
	bls _08010FDC
	add r4, r0, #0
_08010FDC:
	mov r5, r9
	sub r5, r5, #20
	cmp r7, #0
	beq _08010FE6
	sub r5, r5, #128
_08010FE6:
	add r0, r4, #0
	mov r1, #100
	bl __udivsi3
	add r0, r6, r0
	strh r0, [r5]
	add r0, r4, #0
	mov r1, #100
	bl __umodsi3
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, #10
	bl __udivsi3
	add r0, r6, r0
	strh r0, [r5, #2]
	add r0, r4, #0
	mov r1, #10
	bl __umodsi3
	add r0, r6, r0
	strh r0, [r5, #4]
_08011014:
	ldr r0, _080110C4  @ =gUnknown_0200B250
	add r0, r0, r10
	mov r8, r0
	ldrh r4, [r0, #6]
	ldr r0, _080110D8  @ =0x000003E7
	cmp r4, r0
	bls _08011024
	add r4, r0, #0
_08011024:
	mov r5, r9
	add r0, r4, #0
	mov r1, #100
	bl __udivsi3
	add r0, r6, r0
	strh r0, [r5]
	add r0, r4, #0
	mov r1, #100
	bl __umodsi3
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, #10
	bl __udivsi3
	add r0, r6, r0
	strh r0, [r5, #2]
	add r0, r4, #0
	mov r1, #10
	bl __umodsi3
	add r0, r6, r0
	strh r0, [r5, #4]
	mov r1, r8
	ldrb r4, [r1, #5]
	sub r5, r5, #192
	add r2, r5, #2
	mov r8, r2
	add r0, r4, #0
	mov r1, r8
	bl sub_08011120
	lsr r0, r4, #2
	add r1, r5, #0
	bl sub_08011120
	lsr r4, r4, #4
	add r1, r5, #4
	add r0, r4, #0
	bl sub_08011120
	ldr r0, _080110D0  @ =gUnknown_0202A6F0
	ldr r3, [sp, #4]
	add r0, r3, r0
	ldrb r1, [r0, #3]
	lsr r1, r1, #3
	ldrb r0, [r0, #2]
	lsr r3, r0, #3
	mov r4, #7
	and r4, r4, r0
	cmp r4, #4
	ble _08011092
	mov r4, #0
	add r3, r3, #1
_08011092:
	mov r6, #0
	add r5, r5, #30
	cmp r7, #0
	beq _0801109E
	mov r5, r8
	add r5, r5, #92
_0801109E:
	lsl r0, r1, #24
	mov r1, #255
	lsl r1, r1, #24
	add r0, r0, r1
	lsr r1, r0, #24
	asr r0, r0, #24
	mov r2, #1
	neg r2, r2
	cmp r0, r2
	beq _0801110E
_080110B2:
	lsl r0, r3, #24
	asr r0, r0, #24
	cmp r0, #0
	ble _080110DC
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	mov r0, #1
	b _080110E8
_080110C4:
	.4byte gUnknown_0200B250
_080110C8:
	.4byte gUnknown_0202D1F0
_080110CC:
	.4byte gUnknown_0202D23A
_080110D0:
	.4byte gUnknown_0202A6F0
_080110D4:
	.4byte 0x0000FFFF
_080110D8:
	.4byte 0x000003E7
_080110DC:
	cmp r4, #0
	beq _080110E6
	mov r4, #0
	mov r0, #32
	b _080110E8
_080110E6:
	mov r0, #33
_080110E8:
	strh r0, [r5]
	add r5, r5, #2
	lsl r0, r6, #24
	mov r6, #128
	lsl r6, r6, #17
	add r0, r0, r6
	lsr r6, r0, #24
	asr r0, r0, #24
	cmp r0, #10
	bne _080110FE
	add r5, r5, #44
_080110FE:
	lsl r0, r1, #24
	mov r1, #255
	lsl r1, r1, #24
	add r0, r0, r1
	lsr r1, r0, #24
	asr r0, r0, #24
	cmp r0, r2
	bne _080110B2
_0801110E:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08010E90

	.byte 0x00
	.byte 0x00
