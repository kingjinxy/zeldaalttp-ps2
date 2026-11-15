	THUMB_FUNC_START sub_0808A6BC
sub_0808A6BC: @ 0x0808A6BC
	push {r4-r6,lr}
	sub sp, sp, #4
	ldr r4, _0808A718  @ =gRam
	ldr r0, _0808A71C  @ =0x0000050C
	add r2, r4, r0
	ldrh r1, [r2]
	mov r3, #128
	lsl r3, r3, #6
	add r0, r3, #0
	mov r6, #0
	orr r0, r0, r1
	strh r0, [r2]
	ldr r0, _0808A720  @ =0xF0FCF0FC
	str r0, [sp]
	ldr r5, _0808A724  @ =gUnknown_02001600
	ldr r2, _0808A728  @ =0x01000080
	mov r0, sp
	add r1, r5, #0
	bl CpuFastSet
	mov r1, #126
	ldr r2, _0808A72C  @ =0x00000BDE
	add r0, r4, r2
	strh r6, [r0]
	ldr r3, _0808A730  @ =0x00000BDC
	add r0, r4, r3
	strh r1, [r0]
	mov r0, #1
	bl sub_0806BD6C
	bl sub_0808A8C4
	mov r0, #152
	lsl r0, r0, #4
	add r4, r4, r0
	mov r0, #15
	strb r0, [r4]
	ldr r1, _0808A734  @ =gUnknown_02001400
	add r0, r5, #0
	mov r2, #128
	bl CpuFastSet
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_0808A718:
	.4byte gRam
_0808A71C:
	.4byte 0x0000050C
_0808A720:
	.4byte 0xF0FCF0FC
_0808A724:
	.4byte gUnknown_02001600
_0808A728:
	.4byte 0x01000080
_0808A72C:
	.4byte 0x00000BDE
_0808A730:
	.4byte 0x00000BDC
_0808A734:
	.4byte gUnknown_02001400
	THUMB_FUNC_END sub_0808A6BC

