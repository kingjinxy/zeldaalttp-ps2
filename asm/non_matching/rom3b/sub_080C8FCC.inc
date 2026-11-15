	THUMB_FUNC_START sub_080C8FCC
sub_080C8FCC: @ 0x080C8FCC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #16
	lsr r4, r0, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	str r1, [sp]
	lsl r2, r2, #16
	lsr r2, r2, #16
	mov r10, r2
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r9, r3
	ldr r0, _080C9020  @ =gUnknown_08155B4C
	mov r3, #0
	ldrh r2, [r0]
	ldr r7, _080C9024  @ =gUnknown_08155B4E
	ldr r0, _080C9028  @ =gUnknown_08153E04
	mov r12, r0
	cmp r3, r2
	bge _080C9032
	add r6, r7, #0
	mov r5, r12
_080C9002:
	add r0, r3, r2
	lsr r1, r0, #31
	add r0, r0, r1
	asr r1, r0, #1
	lsl r0, r1, #1
	add r0, r0, r5
	ldrh r0, [r0]
	lsl r0, r0, #3
	add r0, r0, r6
	ldrh r0, [r0]
	cmp r0, r4
	bcs _080C902C
	add r3, r1, #1
	b _080C902E
	.byte 0x00
	.byte 0x00
_080C9020:
	.4byte gUnknown_08155B4C
_080C9024:
	.4byte gUnknown_08155B4E
_080C9028:
	.4byte gUnknown_08153E04
_080C902C:
	add r2, r1, #0
_080C902E:
	cmp r3, r2
	blt _080C9002
_080C9032:
	lsl r0, r3, #1
	mov r2, r12
	add r1, r0, r2
	ldrh r0, [r1]
	lsl r0, r0, #3
	add r0, r0, r7
	ldrh r0, [r0]
	cmp r0, r4
	bne _080C905A
	add r2, r7, #0
_080C9046:
	sub r1, r1, #2
	sub r3, r3, #1
	ldrh r0, [r1]
	lsl r0, r0, #3
	add r0, r0, r2
	ldrh r0, [r0]
	cmp r0, r4
	beq _080C9046
	add r0, r3, #1
	b _080C905C
_080C905A:
	ldr r0, _080C90BC  @ =0x0000FFFF
_080C905C:
	lsl r0, r0, #16
	lsr r1, r0, #16
	ldr r0, _080C90BC  @ =0x0000FFFF
	cmp r1, r0
	beq _080C90E2
	add r2, r1, #0
	add r3, r7, #0
	mov r6, r12
	lsl r1, r2, #1
	add r0, r1, r6
	ldrh r0, [r0]
	lsl r0, r0, #3
	add r0, r0, r3
	ldrh r0, [r0]
	cmp r0, r4
	bne _080C90E2
	add r5, r3, #0
	ldr r0, _080C90C0  @ =0x0000368F
	mov r8, r0
_080C9082:
	ldr r6, _080C90C4  @ =gUnknown_08153E04
	add r0, r1, r6
	ldrh r0, [r0]
	lsl r0, r0, #18
	lsr r1, r0, #16
	add r0, r1, #1
	lsl r0, r0, #1
	add r0, r0, r5
	ldrh r0, [r0]
	ldr r6, [sp]
	cmp r0, r6
	bne _080C90C8
	add r0, r1, #2
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	cmp r0, r10
	bne _080C90C8
	add r0, r1, #3
	lsl r0, r0, #1
	add r0, r0, r5
	ldrh r0, [r0]
	cmp r0, r9
	bne _080C90C8
	cmp r1, r8
	bhi _080C90E2
	add r0, r1, #0
	b _080C90E4
	.byte 0x00
	.byte 0x00
_080C90BC:
	.4byte 0x0000FFFF
_080C90C0:
	.4byte 0x0000368F
_080C90C4:
	.4byte gUnknown_08153E04
_080C90C8:
	add r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
	add r3, r7, #0
	lsl r1, r2, #1
	mov r6, r12
	add r0, r1, r6
	ldrh r0, [r0]
	lsl r0, r0, #3
	add r0, r0, r3
	ldrh r0, [r0]
	cmp r0, r4
	beq _080C9082
_080C90E2:
	mov r0, #0
_080C90E4:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C8FCC

