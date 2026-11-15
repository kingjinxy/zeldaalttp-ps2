	THUMB_FUNC_START sub_08088568
sub_08088568: @ 0x08088568
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r0, _0808866C  @ =gRam
	ldr r1, _08088670  @ =0x00000974
	add r2, r0, r1
	mov r1, #4
	strh r1, [r2]
	add r6, r0, #0
	mov r3, #151
	lsl r3, r3, #4
	add r5, r6, r3
	ldr r7, _08088674  @ =gUnknown_02018000
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r6
	mov r8, r0
	ldr r1, _08088678  @ =0x0000096C
	add r1, r1, r6
	mov r10, r1
	mov r9, r2
_08088596:
	mov r2, #0
	ldrsh r0, [r5, r2]
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r7
	ldrh r0, [r0]
	mov r3, r8
	strh r0, [r3]
	mov r1, #0
	ldrsh r0, [r5, r1]
	add r0, r0, #2
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r7
	ldrh r1, [r0]
	ldr r2, _0808867C  @ =0x00000964
	add r0, r6, r2
	strh r1, [r0]
	mov r3, #0
	ldrsh r0, [r5, r3]
	add r0, r0, #4
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r7
	ldrh r1, [r0]
	ldr r2, _08088680  @ =0x00000968
	add r0, r6, r2
	strh r1, [r0]
	mov r3, #0
	ldrsh r0, [r5, r3]
	add r0, r0, #6
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r7
	ldrh r0, [r0]
	mov r1, r10
	strh r0, [r1]
	mov r2, #6
	ldr r4, _08088684  @ =0x000003FE
	mov r3, r8
	add r3, r3, #12
_080885F8:
	ldrh r0, [r3]
	add r1, r4, #0
	and r1, r1, r0
	mov r0, #0
	strh r0, [r3]
	cmp r1, #238
	beq _0808860E
	cmp r1, #254
	beq _0808860E
	mov r1, #32
	strh r1, [r3]
_0808860E:
	sub r3, r3, #4
	sub r2, r2, #2
	cmp r2, #0
	bge _080885F8
	ldrh r0, [r5]
	lsl r0, r0, #16
	asr r2, r0, #17
	ldr r3, _08088688  @ =gUnknown_0200CBA0
	add r1, r2, r3
	mov r3, r8
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _0808868C  @ =gUnknown_0200CBA1
	add r1, r2, r0
	ldr r3, _0808867C  @ =0x00000964
	add r0, r6, r3
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _08088690  @ =gUnknown_0200CBA2
	add r1, r2, r0
	add r3, r3, #4
	add r0, r6, r3
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _08088694  @ =gUnknown_0200CBA3
	add r1, r2, r0
	mov r2, r10
	ldrb r0, [r2]
	strb r0, [r1]
	ldrh r0, [r5]
	add r0, r0, #128
	strh r0, [r5]
	mov r3, r9
	ldrh r0, [r3]
	sub r0, r0, #1
	strh r0, [r3]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08088596
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808866C:
	.4byte gRam
_08088670:
	.4byte 0x00000974
_08088674:
	.4byte gUnknown_02018000
_08088678:
	.4byte 0x0000096C
_0808867C:
	.4byte 0x00000964
_08088680:
	.4byte 0x00000968
_08088684:
	.4byte 0x000003FE
_08088688:
	.4byte gUnknown_0200CBA0
_0808868C:
	.4byte gUnknown_0200CBA1
_08088690:
	.4byte gUnknown_0200CBA2
_08088694:
	.4byte gUnknown_0200CBA3
	THUMB_FUNC_END sub_08088568

