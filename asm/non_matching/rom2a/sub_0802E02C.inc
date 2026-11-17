	THUMB_FUNC_START sub_0802E02C
sub_0802E02C: @ 0x0802E02C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r6, _0802E058  @ =gUnknown_02016D78
	bl sub_08137AFC
	bl sub_0802DFD0
	bl sub_08000BAC
	ldr r3, _0802E05C  @ =gSubState
	ldrb r0, [r3]
	cmp r0, #1
	beq _0802E08A
	cmp r0, #1
	bgt _0802E060
	cmp r0, #0
	beq _0802E06E
	b _0802E192
	.byte 0x00
	.byte 0x00
_0802E058:
	.4byte gUnknown_02016D78
_0802E05C:
	.4byte gSubState
_0802E060:
	cmp r0, #2
	bne _0802E066
	b _0802E160
_0802E066:
	cmp r0, #3
	bne _0802E06C
	b _0802E180
_0802E06C:
	b _0802E192
_0802E06E:
	ldr r0, _0802E0E0  @ =gUnknown_03000520
	ldrb r1, [r0]
	cmp r1, #0
	beq _0802E078
	b _0802E192
_0802E078:
	mov r0, #1
	strb r0, [r3]
	add r0, r6, #0
	sub r0, r0, #24
	str r1, [r0, #12]
	str r1, [r0, #16]
	ldr r0, _0802E0E4  @ =0x00000195
	bl play_sound
_0802E08A:
	ldr r0, _0802E0E8  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _0802E09C
	mov r0, #8
	bl play_sound
_0802E09C:
	mov r4, #0
	ldr r0, _0802E0EC  @ =gUnknown_03006C80
	mov r10, r0
	ldrb r0, [r0]
	cmp r4, r0
	bcs _0802E134
	ldr r5, _0802E0F0  @ =gUnknown_03006A30
	mov r1, #40
	add r1, r1, r5
	mov r9, r1
	mov r3, #16
	neg r3, r3
	mov r8, r3
_0802E0B6:
	lsl r0, r4, #1
	add r3, r0, r6
	ldrh r0, [r3]
	cmp r0, #0
	beq _0802E0FA
	lsl r0, r4, #3
	add r0, r0, r4
	lsl r0, r0, #4
	add r0, r0, r9
	ldr r1, [r0]
	ldrh r2, [r1, #54]
	mov r7, #54
	ldrsh r0, [r1, r7]
	cmp r0, r8
	ble _0802E0F4
	sub r0, r2, #1
	strh r0, [r1, #54]
	ldrh r0, [r3]
	sub r0, r0, #1
	strh r0, [r3]
	b _0802E126
_0802E0E0:
	.4byte gUnknown_03000520
_0802E0E4:
	.4byte 0x00000195
_0802E0E8:
	.4byte gUnknown_03000948
_0802E0EC:
	.4byte gUnknown_03006C80
_0802E0F0:
	.4byte gUnknown_03006A30
_0802E0F4:
	mov r0, #0
	strh r0, [r3]
	b _0802E126
_0802E0FA:
	ldr r3, _0802E154  @ =gUnknown_02016D60
	mov r2, #1
	lsl r2, r2, r4
	ldr r1, [r3, #12]
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	bne _0802E126
	orr r1, r1, r2
	str r1, [r3, #12]
	ldr r0, [r3, #16]
	add r0, r0, #1
	str r0, [r3, #16]
	mov r0, #9
	bl play_sound
	lsl r0, r4, #3
	add r0, r0, r4
	lsl r0, r0, #4
	add r0, r0, r5
	mov r1, #2
	strb r1, [r0, #12]
_0802E126:
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _0802E158  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r4, r0
	bcc _0802E0B6
_0802E134:
	ldr r2, _0802E154  @ =gUnknown_02016D60
	ldr r0, [r2, #16]
	mov r1, r10
	ldrb r1, [r1]
	cmp r0, r1
	bne _0802E192
	ldr r1, _0802E15C  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #180
	strh r0, [r2, #4]
	add r0, r0, #226
	bl play_sound
	b _0802E192
_0802E154:
	.4byte gUnknown_02016D60
_0802E158:
	.4byte gUnknown_03006C80
_0802E15C:
	.4byte gSubState
_0802E160:
	add r1, r6, #0
	sub r1, r1, #24
	ldrh r0, [r1, #4]
	sub r0, r0, #1
	strh r0, [r1, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0802E192
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	mov r0, #1
	mov r1, #8
	bl sub_0800C0B0
	b _0802E192
_0802E180:
	ldr r0, _0802E1A0  @ =gUnknown_03000520
	ldrb r2, [r0]
	cmp r2, #0
	bne _0802E192
	ldr r1, _0802E1A4  @ =gUnknown_03005050
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	strb r2, [r3]
_0802E192:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0802E1A0:
	.4byte gUnknown_03000520
_0802E1A4:
	.4byte gUnknown_03005050
	THUMB_FUNC_END sub_0802E02C

