	THUMB_FUNC_START sub_08022CA4
sub_08022CA4: @ 0x08022CA4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	add r5, r0, #0
	ldr r6, _08022D10  @ =0x0000FFFF
	mov r4, #255
	mov r3, #0
	ldr r0, _08022D14  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r3, r0
	bcs _08022D40
	ldrb r1, [r5, #23]
	mov r12, r1
	ldr r7, _08022D18  @ =gUnknown_03006A58
	mov r9, r7
	ldr r1, _08022D1C  @ =0x0000024F
	mov r8, r1
	mov r10, r0
_08022CCC:
	cmp r12, r3
	beq _08022D36
	lsl r0, r3, #3
	add r0, r0, r3
	lsl r0, r0, #4
	add r0, r0, r9
	ldr r1, [r0]
	ldrh r2, [r1, #50]
	mov r7, #50
	ldrsh r0, [r1, r7]
	cmp r0, r8
	bgt _08022D36
	ldrh r0, [r5, #50]
	sub r0, r2, r0
	lsl r0, r0, #16
	neg r0, r0
	lsr r2, r0, #16
	ldrh r0, [r1, #54]
	ldrh r1, [r5, #54]
	sub r0, r0, r1
	lsl r0, r0, #16
	neg r0, r0
	lsr r0, r0, #16
	cmp r4, #255
	bne _08022D20
	lsl r1, r2, #16
	asr r1, r1, #16
	lsl r0, r0, #16
	asr r0, r0, #16
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r6, r1, #16
	b _08022D34
	.byte 0x00
	.byte 0x00
_08022D10:
	.4byte 0x0000FFFF
_08022D14:
	.4byte gUnknown_03006C80
_08022D18:
	.4byte gUnknown_03006A58
_08022D1C:
	.4byte 0x0000024F
_08022D20:
	lsl r1, r2, #16
	asr r1, r1, #16
	lsl r0, r0, #16
	asr r0, r0, #16
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r0, r1, #16
	cmp r6, r0
	bls _08022D36
	add r6, r0, #0
_08022D34:
	add r4, r3, #0
_08022D36:
	add r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, r10
	bcc _08022CCC
_08022D40:
	add r0, r4, #0
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08022CA4

