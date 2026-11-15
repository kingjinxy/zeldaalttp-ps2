	THUMB_FUNC_START sub_08119640
sub_08119640: @ 0x08119640
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _08119730  @ =gRam
	ldr r2, _08119734  @ =0x00001844
	add r0, r1, r2
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	add r7, r1, #0
	cmp r0, #0
	bge _08119676
	ldr r1, _08119738  @ =0x00000E29
	add r0, r7, r1
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	cmp r0, #3
	beq _08119672
	strb r0, [r1]
_08119672:
	mov r0, #7
	strb r0, [r2]
_08119676:
	add r5, r7, #0
	ldr r2, _0811973C  @ =0x00000DF7
	add r1, r5, r2
	add r1, r4, r1
	add r2, r2, #40
	add r0, r5, r2
	add r3, r4, r0
	ldrb r0, [r3]
	ldrb r2, [r1]
	add r0, r0, r2
	mov r2, #0
	mov r8, r2
	strb r0, [r1]
	ldrb r2, [r1]
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bge _081196A0
	neg r0, r2
	lsl r0, r0, #24
	lsr r2, r0, #24
_081196A0:
	cmp r2, #7
	bls _081196AA
	ldrb r0, [r3]
	neg r0, r0
	strb r0, [r3]
_081196AA:
	add r0, r4, #0
	bl sub_080BF774
	add r0, r4, #0
	bl sub_080C1768
	ldr r1, _08119740  @ =0x00000DC5
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r6, r5, r2
	strb r0, [r6]
	add r1, r1, #20
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r5, r2
	strb r1, [r0]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r5, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	sub r0, r0, #24
	mov r2, #0
	ldrsh r1, [r6, r2]
	cmp r0, r1
	blt _081196F2
	ldr r1, _08119744  @ =0x00000E15
	add r0, r5, r1
	add r0, r4, r0
	mov r2, r8
	strb r2, [r0]
_081196F2:
	ldr r1, _08119748  @ =gUnknown_0817F3B8
	ldr r2, _08119738  @ =0x00000E29
	add r0, r7, r2
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r2, _0811974C  @ =0x00001744
	add r0, r7, r2
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C177C
	ldr r0, _08119750  @ =gUnknown_03003E74
	ldrh r0, [r0]
	ldr r4, _08119754  @ =0x00000964
	add r1, r7, r4
	ldrh r1, [r1]
	ldrh r2, [r6]
	ldr r3, _08119758  @ =0x00002409
	mov r4, r8
	str r4, [sp]
	bl sub_080C6368
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08119730:
	.4byte gRam
_08119734:
	.4byte 0x00001844
_08119738:
	.4byte 0x00000E29
_0811973C:
	.4byte 0x00000DF7
_08119740:
	.4byte 0x00000DC5
_08119744:
	.4byte 0x00000E15
_08119748:
	.4byte gUnknown_0817F3B8
_0811974C:
	.4byte 0x00001744
_08119750:
	.4byte gUnknown_03003E74
_08119754:
	.4byte 0x00000964
_08119758:
	.4byte 0x00002409
	THUMB_FUNC_END sub_08119640

