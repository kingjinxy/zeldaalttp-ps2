	THUMB_FUNC_START sub_0811A980
sub_0811A980: @ 0x0811A980
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r5, _0811A9E8  @ =gRam
	ldr r1, _0811A9EC  @ =0x00000E29
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #7
	bls _0811A9A8
	b _0811AB96
_0811A9A8:
	add r0, r4, #0
	bl sub_080BEBE0
	ldr r2, _0811A9F0  @ =0x0000180D
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811AA00
	add r1, r4, #1
	ldr r3, _0811A9F4  @ =0x0000177A
	add r0, r5, r3
	ldrb r0, [r0]
	cmp r1, r0
	beq _0811A9C6
	b _0811AB96
_0811A9C6:
	ldr r4, _0811A9F8  @ =0x00001791
	add r3, r5, r4
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	beq _0811A9DA
	b _0811AB96
_0811A9DA:
	mov r0, #127
	and r0, r0, r1
	strb r0, [r3]
	ldr r6, _0811A9FC  @ =0x00001705
	add r0, r5, r6
	strb r2, [r0]
	b _0811AB96
_0811A9E8:
	.4byte gRam
_0811A9EC:
	.4byte 0x00000E29
_0811A9F0:
	.4byte 0x0000180D
_0811A9F4:
	.4byte 0x0000177A
_0811A9F8:
	.4byte 0x00001791
_0811A9FC:
	.4byte 0x00001705
_0811AA00:
	ldr r7, _0811ABA8  @ =gUnknown_03003932
	ldrb r0, [r7]
	cmp r0, #0
	beq _0811AA0A
	b _0811AB96
_0811AA0A:
	ldr r1, _0811ABAC  @ =gUnknown_03003928
	ldrb r0, [r1]
	cmp r0, #0
	beq _0811AA14
	b _0811AB96
_0811AA14:
	ldr r2, _0811ABB0  @ =0x00000E47
	add r0, r5, r2
	add r0, r6, r0
	mov r3, #161
	lsl r3, r3, #4
	add r1, r5, r3
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	beq _0811AA2A
	b _0811AB96
_0811AA2A:
	ldr r4, _0811ABB4  @ =0x000016C4
	add r0, r5, r4
	ldrb r0, [r0]
	ldr r7, _0811ABB8  @ =gUnknown_03002B90
	strb r0, [r7]
	ldr r1, _0811ABBC  @ =0x000016C5
	add r0, r5, r1
	ldrb r1, [r0]
	mov r2, #151
	lsl r2, r2, #4
	add r0, r5, r2
	strb r1, [r0]
	mov r3, #182
	lsl r3, r3, #5
	add r0, r5, r3
	ldrb r0, [r0]
	ldr r4, _0811ABC0  @ =gUnknown_03002B91
	strb r0, [r4]
	ldr r7, _0811ABC4  @ =0x000016C1
	add r0, r5, r7
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r5, r2
	strb r1, [r0]
	ldr r3, _0811ABC8  @ =0x00000964
	add r3, r3, r5
	mov r9, r3
	mov r0, #16
	strb r0, [r3]
	mov r0, #24
	ldr r4, _0811ABCC  @ =gUnknown_03002B95
	strb r0, [r4]
	ldr r7, _0811ABD0  @ =0x00000DCF
	add r0, r5, r7
	add r0, r6, r0
	str r0, [sp]
	ldrb r0, [r0]
	sub r2, r2, #9
	add r1, r5, r2
	strb r0, [r1]
	ldr r3, _0811ABD4  @ =0x00000DE3
	add r0, r5, r3
	add r0, r0, r6
	mov r10, r0
	ldrb r0, [r0]
	ldr r7, _0811ABD8  @ =0x00000969
	add r4, r5, r7
	strb r0, [r4]
	ldr r2, _0811ABDC  @ =0x00000DC5
	add r0, r5, r2
	add r0, r0, r6
	mov r8, r0
	ldrb r0, [r0]
	ldr r3, _0811ABE0  @ =0x0000096C
	add r2, r5, r3
	strb r0, [r2]
	ldr r7, _0811ABE4  @ =0x00000DD9
	add r0, r5, r7
	add r0, r6, r0
	str r0, [sp, #4]
	ldrb r0, [r0]
	ldr r7, _0811ABE8  @ =0x0000096D
	add r3, r5, r7
	strb r0, [r3]
	ldrh r0, [r1]
	sub r0, r0, #16
	strh r0, [r1]
	ldrh r0, [r2]
	sub r0, r0, #16
	strh r0, [r2]
	ldrb r1, [r4]
	add r7, r7, #7
	add r0, r5, r7
	strb r1, [r0]
	ldrb r0, [r2]
	strb r0, [r4]
	ldrb r1, [r3]
	ldr r4, _0811ABEC  @ =0x00000975
	add r0, r5, r4
	strb r1, [r0]
	mov r0, #32
	strb r0, [r2]
	strb r0, [r3]
	bl sub_080C466C
	lsl r0, r0, #24
	cmp r0, #0
	beq _0811AB96
	ldr r7, [sp]
	ldrb r0, [r7]
	ldr r1, _0811ABB8  @ =gUnknown_03002B90
	strb r0, [r1]
	mov r2, r10
	ldrb r0, [r2]
	ldr r3, _0811ABC0  @ =gUnknown_03002B91
	strb r0, [r3]
	mov r4, r8
	ldrb r0, [r4]
	mov r7, r9
	strb r0, [r7]
	ldr r1, [sp, #4]
	ldrb r0, [r1]
	ldr r2, _0811ABCC  @ =gUnknown_03002B95
	strb r0, [r2]
	ldr r3, _0811ABB8  @ =gUnknown_03002B90
	ldrh r0, [r3]
	sub r0, r0, #8
	strh r0, [r3]
	ldrh r0, [r7]
	sub r0, r0, #12
	strh r0, [r7]
	add r0, r6, #0
	bl sub_0811A8C4
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _0811ABF0  @ =gUnknown_0817F560
	add r0, r0, r1
	ldrb r0, [r0]
	bl sub_080BEB40
	ldr r7, _0811ABF4  @ =0x000017AA
	add r4, r5, r7
	ldrb r0, [r4]
	cmp r0, #0
	bne _0811AB96
	ldr r1, _0811ABF8  @ =0x00001649
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #2
	beq _0811AB96
	ldr r2, _0811ABB8  @ =gUnknown_03002B90
	ldrb r1, [r2]
	ldr r3, _0811ABFC  @ =0x000016CD
	add r0, r5, r3
	strb r1, [r0]
	ldr r7, _0811ABC0  @ =gUnknown_03002B91
	ldrb r1, [r7]
	ldr r2, _0811AC00  @ =0x000016CE
	add r0, r5, r2
	strb r1, [r0]
	add r0, r6, #0
	bl sub_0811A8C4
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _0811AC04  @ =gUnknown_0817F570
	add r1, r0, r1
	ldrb r3, [r1]
	ldr r6, _0811AC08  @ =0x000016CF
	add r2, r5, r6
	strb r3, [r2]
	ldrb r2, [r1]
	ldr r7, _0811AC0C  @ =0x0000174C
	add r1, r5, r7
	strh r2, [r1]
	ldr r1, _0811AC10  @ =gUnknown_0817F580
	add r0, r0, r1
	ldrb r0, [r0]
	ldr r1, _0811ABAC  @ =gUnknown_03003928
	strb r0, [r1]
	mov r0, #1
	ldr r2, _0811ABA8  @ =gUnknown_03003932
	strb r0, [r2]
	mov r0, #58
	strb r0, [r4]
	ldr r3, _0811AC14  @ =0x00000AA8
	add r0, r5, r3
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	bne _0811AB96
	ldr r1, _0811AC18  @ =gUnknown_0817F590
	ldr r0, _0811AC1C  @ =gArmor
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r4, _0811AC20  @ =0x00001805
	add r0, r5, r4
	strb r1, [r0]
_0811AB96:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811ABA8:
	.4byte gUnknown_03003932
_0811ABAC:
	.4byte gUnknown_03003928
_0811ABB0:
	.4byte 0x00000E47
_0811ABB4:
	.4byte 0x000016C4
_0811ABB8:
	.4byte gUnknown_03002B90
_0811ABBC:
	.4byte 0x000016C5
_0811ABC0:
	.4byte gUnknown_03002B91
_0811ABC4:
	.4byte 0x000016C1
_0811ABC8:
	.4byte 0x00000964
_0811ABCC:
	.4byte gUnknown_03002B95
_0811ABD0:
	.4byte 0x00000DCF
_0811ABD4:
	.4byte 0x00000DE3
_0811ABD8:
	.4byte 0x00000969
_0811ABDC:
	.4byte 0x00000DC5
_0811ABE0:
	.4byte 0x0000096C
_0811ABE4:
	.4byte 0x00000DD9
_0811ABE8:
	.4byte 0x0000096D
_0811ABEC:
	.4byte 0x00000975
_0811ABF0:
	.4byte gUnknown_0817F560
_0811ABF4:
	.4byte 0x000017AA
_0811ABF8:
	.4byte 0x00001649
_0811ABFC:
	.4byte 0x000016CD
_0811AC00:
	.4byte 0x000016CE
_0811AC04:
	.4byte gUnknown_0817F570
_0811AC08:
	.4byte 0x000016CF
_0811AC0C:
	.4byte 0x0000174C
_0811AC10:
	.4byte gUnknown_0817F580
_0811AC14:
	.4byte 0x00000AA8
_0811AC18:
	.4byte gUnknown_0817F590
_0811AC1C:
	.4byte gArmor
_0811AC20:
	.4byte 0x00001805
	THUMB_FUNC_END sub_0811A980

