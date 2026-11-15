	THUMB_FUNC_START sub_0802EA98
sub_0802EA98: @ 0x0802EA98
	push {r4,r5,lr}
	ldr r0, _0802EAB0  @ =gUnknown_02016D60
	ldrb r1, [r0]
	add r5, r0, #0
	cmp r1, #10
	bls _0802EAA6
	b _0802ED84
_0802EAA6:
	lsl r0, r1, #2
	ldr r1, _0802EAB4  @ =0x0802EAB8
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_0802EAB0:
	.4byte gUnknown_02016D60
_0802EAB4:
	.4byte 0x0802EAB8
	.4byte _0802EAE4
	.4byte _0802EB68
	.4byte _0802EB98
	.4byte _0802EBAC
	.4byte _0802EC0C
	.4byte _0802EC40
	.4byte _0802EC50
	.4byte _0802ECA4
	.4byte _0802ECCC
	.4byte _0802ED14
	.4byte _0802ED64
_0802EAE4:
	ldr r0, _0802EB5C  @ =gUnknown_03000520
	ldrb r0, [r0]
	cmp r0, #0
	beq _0802EAEE
	b _0802ED84
_0802EAEE:
	mov r0, #0
	bl sub_08063C5C
	add r2, r0, #0
	ldrb r1, [r2, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r2, #28]
	mov r1, #0
	mov r0, #104
	strh r0, [r2, #50]
	mov r0, #200
	lsl r0, r0, #1
	strh r0, [r2, #54]
	add r0, r2, #0
	add r0, r0, #42
	strb r1, [r0]
	ldrb r1, [r2, #31]
	mov r0, #63
	and r0, r0, r1
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r2, #31]
	add r1, r2, #0
	add r1, r1, #46
	mov r0, #3
	strb r0, [r1]
	add r2, r2, #94
	ldrb r1, [r2]
	sub r0, r0, #16
	and r0, r0, r1
	mov r1, #4
	orr r0, r0, r1
	strb r0, [r2]
	mov r0, #93
	mov r1, #0
	mov r2, #0
	bl sub_0804CCE4
	ldr r0, _0802EB60  @ =gUnknown_0202A7E0
	ldr r2, [r0, #12]
	mov r0, #136
	strh r0, [r2, #50]
	mov r0, #196
	lsl r0, r0, #1
	strh r0, [r2, #54]
	ldr r1, _0802EB64  @ =gUnknown_02016D60
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _0802ED84
	.byte 0x00
	.byte 0x00
_0802EB5C:
	.4byte gUnknown_03000520
_0802EB60:
	.4byte gUnknown_0202A7E0
_0802EB64:
	.4byte gUnknown_02016D60
_0802EB68:
	ldrb r4, [r5, #9]
	cmp r4, #0
	beq _0802EB70
	b _0802ED84
_0802EB70:
	mov r0, #0
	mov r1, #104
	mov r2, #0
	bl sub_08063D28
	ldr r1, _0802EB94  @ =gUnknown_0202A7E0
	mov r0, #2
	strb r0, [r1, #4]
	mov r0, #224
	strb r0, [r1, #5]
	strb r4, [r1, #6]
	ldr r0, [r1, #12]
	add r0, r0, #42
	strb r4, [r0]
	ldr r1, [r1, #12]
	mov r0, #128
	str r0, [r1, #12]
	b _0802ED00
_0802EB94:
	.4byte gUnknown_0202A7E0
_0802EB98:
	ldr r0, _0802EBA8  @ =gUnknown_0202A7E0
	ldrb r0, [r0, #2]
	cmp r0, #0
	beq _0802EBA2
	b _0802ED84
_0802EBA2:
	mov r0, #60
	strh r0, [r5, #4]
	b _0802ED00
_0802EBA8:
	.4byte gUnknown_0202A7E0
_0802EBAC:
	ldrb r0, [r5, #11]
	cmp r0, #0
	bne _0802EBB4
	b _0802ED84
_0802EBB4:
	ldrh r0, [r5, #4]
	cmp r0, #8
	bne _0802EBC4
	ldr r0, _0802EC00  @ =gUnknown_0202A7E0
	ldr r0, [r0, #12]
	add r0, r0, #42
	mov r1, #6
	strb r1, [r0]
_0802EBC4:
	ldrh r0, [r5, #4]
	sub r0, r0, #1
	strh r0, [r5, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0802EBD2
	b _0802ED84
_0802EBD2:
	ldr r0, _0802EC04  @ =0x00000501
	bl sub_0800D67C
	ldr r3, _0802EC08  @ =gUnknown_02000010
	ldrb r2, [r3, #3]
	mov r1, #32
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #1
	orr r0, r0, r2
	strb r0, [r3, #3]
	ldrb r0, [r3, #4]
	and r1, r1, r0
	mov r0, #14
	orr r1, r1, r0
	strb r1, [r3, #4]
	ldr r0, _0802EC00  @ =gUnknown_0202A7E0
	ldr r0, [r0, #12]
	add r0, r0, #42
	mov r1, #4
	strb r1, [r0]
	b _0802ED00
_0802EC00:
	.4byte gUnknown_0202A7E0
_0802EC04:
	.4byte 0x00000501
_0802EC08:
	.4byte gUnknown_02000010
_0802EC0C:
	ldr r0, _0802EC38  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #6
	beq _0802EC1A
	b _0802ED84
_0802EC1A:
	bl sub_0800D644
	ldr r4, _0802EC3C  @ =gUnknown_02016D60
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	mov r0, #0
	mov r1, #16
	mov r2, #0
	bl sub_08063D28
	mov r0, #16
	strh r0, [r4, #4]
	b _0802ED84
	.byte 0x00
	.byte 0x00
_0802EC38:
	.4byte gUnknown_02000010
_0802EC3C:
	.4byte gUnknown_02016D60
_0802EC40:
	ldrh r0, [r5, #4]
	sub r0, r0, #1
	strh r0, [r5, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0802EC4E
	b _0802ED84
_0802EC4E:
	b _0802ED00
_0802EC50:
	mov r0, #60
	strh r0, [r5, #4]
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	ldr r0, _0802EC94  @ =gUnknown_0202A7E0
	ldr r0, [r0, #12]
	add r0, r0, #42
	mov r1, #6
	strb r1, [r0]
	ldr r0, _0802EC98  @ =gUnknown_03006A30
	ldr r0, [r0, #40]
	add r0, r0, #42
	mov r1, #2
	strb r1, [r0]
	ldr r0, _0802EC9C  @ =0x00000502
	bl sub_0800D67C
	ldr r3, _0802ECA0  @ =gUnknown_02000010
	ldrb r2, [r3, #3]
	mov r1, #32
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #1
	orr r0, r0, r2
	strb r0, [r3, #3]
	ldrb r0, [r3, #4]
	and r1, r1, r0
	mov r0, #14
	orr r1, r1, r0
	strb r1, [r3, #4]
	b _0802ED84
	.byte 0x00
	.byte 0x00
_0802EC94:
	.4byte gUnknown_0202A7E0
_0802EC98:
	.4byte gUnknown_03006A30
_0802EC9C:
	.4byte 0x00000502
_0802ECA0:
	.4byte gUnknown_02000010
_0802ECA4:
	ldr r0, _0802ECC4  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #6
	bne _0802ED84
	bl sub_0800D644
	ldr r0, _0802ECC8  @ =gUnknown_02016D60
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r1, #16
	strh r1, [r0, #4]
	b _0802ED84
	.byte 0x00
	.byte 0x00
_0802ECC4:
	.4byte gUnknown_02000010
_0802ECC8:
	.4byte gUnknown_02016D60
_0802ECCC:
	ldrh r0, [r5, #4]
	sub r0, r0, #1
	strh r0, [r5, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0802ED84
	ldr r0, _0802ED08  @ =0x00000503
	bl sub_0800D67C
	ldr r3, _0802ED0C  @ =gUnknown_02000010
	ldrb r2, [r3, #3]
	mov r1, #32
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #1
	orr r0, r0, r2
	strb r0, [r3, #3]
	ldrb r0, [r3, #4]
	and r1, r1, r0
	mov r0, #14
	orr r1, r1, r0
	strb r1, [r3, #4]
	ldr r0, _0802ED10  @ =0x80040008
	bl play_sound
_0802ED00:
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	b _0802ED84
_0802ED08:
	.4byte 0x00000503
_0802ED0C:
	.4byte gUnknown_02000010
_0802ED10:
	.4byte 0x80040008
_0802ED14:
	ldr r0, _0802ED50  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #6
	bne _0802ED84
	bl sub_0800D644
	ldr r1, _0802ED54  @ =gUnknown_02016D60
	ldrb r0, [r1]
	add r0, r0, #1
	mov r4, #0
	strb r0, [r1]
	mov r0, #0
	mov r1, #16
	mov r2, #0
	bl sub_08063D28
	ldr r1, _0802ED58  @ =gUnknown_03006A30
	mov r0, #8
	strb r0, [r1, #12]
	ldr r0, [r1, #40]
	add r0, r0, #42
	strb r4, [r0]
	ldr r0, _0802ED5C  @ =gUnknown_0202A7E0
	ldr r1, _0802ED60  @ =gUnknown_08427870
	bl sub_0804CE64
	b _0802ED84
	.byte 0x00
	.byte 0x00
_0802ED50:
	.4byte gUnknown_02000010
_0802ED54:
	.4byte gUnknown_02016D60
_0802ED58:
	.4byte gUnknown_03006A30
_0802ED5C:
	.4byte gUnknown_0202A7E0
_0802ED60:
	.4byte gUnknown_08427870
_0802ED64:
	ldr r0, _0802ED8C  @ =gUnknown_0202A7E0
	bl sub_0804CE7C
	cmp r0, #0
	beq _0802ED84
	ldr r0, _0802ED90  @ =gUnknown_02016D60
	mov r2, #0
	strb r2, [r0]
	ldr r1, _0802ED94  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _0802ED98  @ =gUnknown_03000520
	strb r2, [r1, #7]
	ldr r0, _0802ED9C  @ =0x0020FFF0
	str r0, [r1, #12]
_0802ED84:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802ED8C:
	.4byte gUnknown_0202A7E0
_0802ED90:
	.4byte gUnknown_02016D60
_0802ED94:
	.4byte gSubState
_0802ED98:
	.4byte gUnknown_03000520
_0802ED9C:
	.4byte 0x0020FFF0
	THUMB_FUNC_END sub_0802EA98

