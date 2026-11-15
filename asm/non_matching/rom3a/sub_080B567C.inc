	THUMB_FUNC_START sub_080B567C
sub_080B567C: @ 0x080B567C
	push {r4-r7,lr}
	sub sp, sp, #16
	ldr r1, _080B5708  @ =gUnknown_0816F020
	ldr r6, _080B570C  @ =gRam
	ldr r0, _080B5710  @ =0x00000AB2
	add r4, r6, r0
	ldrh r0, [r4]
	lsr r0, r0, #1
	lsl r2, r0, #1
	add r1, r2, r1
	ldrh r0, [r1]
	lsl r0, r0, #2
	ldr r1, _080B5714  @ =gUnknown_02002000
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #4
	and r0, r0, r1
	cmp r0, #0
	bne _080B576A
	ldr r1, _080B5718  @ =gCompasses
	ldr r0, _080B571C  @ =gUnknown_081676B2
	add r0, r2, r0
	ldrh r1, [r1]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _080B576A
	ldr r0, _080B5720  @ =gUnknown_0816F03C
	add r0, r2, r0
	ldrh r0, [r0]
	mov r5, #255
	lsl r5, r5, #8
	cmp r0, r5
	beq _080B576A
	bl sub_080B55B0
	ldr r2, _080B5724  @ =0x00000996
	add r0, r6, r2
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #9
	bhi _080B576A
	ldr r1, _080B5728  @ =gUnknown_0816F0C4
	ldrh r0, [r4]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r4, r0, r1
	mov r1, #0
	ldrsh r0, [r4, r1]
	and r0, r0, r5
	ldr r2, _080B572C  @ =0x000015E8
	add r1, r6, r2
	mov r2, #255
	lsr r0, r0, #8
	ldrb r1, [r1]
	add r0, r0, r1
	add r7, r0, #0
	add r7, r7, #136
	ldr r1, _080B5730  @ =0x000015EC
	add r0, r6, r1
	ldrh r3, [r0]
	add r0, r5, #0
	and r0, r0, r3
	cmp r0, #0
	beq _080B5734
	mov r2, #240
	b _080B5742
	.byte 0x00
	.byte 0x00
_080B5708:
	.4byte gUnknown_0816F020
_080B570C:
	.4byte gRam
_080B5710:
	.4byte 0x00000AB2
_080B5714:
	.4byte gUnknown_02002000
_080B5718:
	.4byte gCompasses
_080B571C:
	.4byte gUnknown_081676B2
_080B5720:
	.4byte gUnknown_0816F03C
_080B5724:
	.4byte 0x00000996
_080B5728:
	.4byte gUnknown_0816F0C4
_080B572C:
	.4byte 0x000015E8
_080B5730:
	.4byte 0x000015EC
_080B5734:
	ldrh r1, [r4]
	add r0, r2, #0
	and r0, r0, r1
	and r2, r2, r3
	add r0, r0, r2
	add r2, r0, #0
	sub r2, r2, #48
_080B5742:
	ldr r4, _080B5774  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r4, r4, r0
	mov r0, #0
	ldrsb r0, [r4, r0]
	add r2, r2, #1
	ldr r3, _080B5778  @ =0x00000261
	mov r1, #1
	str r1, [sp]
	mov r1, #0
	str r1, [sp, #4]
	str r1, [sp, #8]
	str r1, [sp, #12]
	add r1, r7, #0
	bl sub_080B35E0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_080B576A:
	add sp, sp, #16
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B5774:
	.4byte gRam
_080B5778:
	.4byte 0x00000261
	THUMB_FUNC_END sub_080B567C

