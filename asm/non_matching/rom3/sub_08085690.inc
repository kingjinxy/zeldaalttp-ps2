	THUMB_FUNC_START sub_08085690
sub_08085690: @ 0x08085690
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r3, _08085714  @ =gRam
	mov r0, #151
	lsl r0, r0, #4
	add r5, r3, r0
	mov r2, #0
	ldrsh r1, [r5, r2]
	mov r8, r1
	ldr r7, _08085718  @ =0x00000B08
	add r4, r3, r7
	ldrh r6, [r4]
	mov r0, #7
	and r0, r0, r6
	ldr r2, _0808571C  @ =0x00000968
	add r1, r3, r2
	strh r0, [r1]
	ldrh r2, [r5]
	ldr r0, _08085720  @ =0x00001FFF
	and r0, r0, r2
	ldr r1, _08085724  @ =gUnknown_08167778
	ldrh r1, [r1, #12]
	cmp r0, r1
	blt _080856FC
	ldr r7, _08085728  @ =0xFFFFFB00
	add r0, r2, r7
	strh r0, [r5]
	ldrh r0, [r4]
	lsl r0, r0, #1
	ldr r7, _0808572C  @ =0x000018B0
	add r1, r3, r7
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #254
	and r0, r0, r1
	cmp r0, #65
	bls _080856E2
	ldr r1, _08085730  @ =0xFFFFF800
	add r0, r2, r1
	strh r0, [r5]
_080856E2:
	ldrh r0, [r4]
	mov r1, #8
	eor r0, r0, r1
	strh r0, [r4]
	bl sub_08084FD0
	bl sub_0808A108
	ldrh r0, [r4]
	bl sub_080835C8
	mov r2, r8
	strh r2, [r5]
_080856FC:
	ldr r0, _08085714  @ =gRam
	ldr r7, _08085718  @ =0x00000B08
	add r0, r0, r7
	strh r6, [r0]
	bl sub_08084D84
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08085714:
	.4byte gRam
_08085718:
	.4byte 0x00000B08
_0808571C:
	.4byte 0x00000968
_08085720:
	.4byte 0x00001FFF
_08085724:
	.4byte gUnknown_08167778
_08085728:
	.4byte 0xFFFFFB00
_0808572C:
	.4byte 0x000018B0
_08085730:
	.4byte 0xFFFFF800
	THUMB_FUNC_END sub_08085690

