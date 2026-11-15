	THUMB_FUNC_START sub_080836B8
sub_080836B8: @ 0x080836B8
	push {r4,r5,lr}
	ldr r4, _08083724  @ =gRam
	ldr r1, _08083728  @ =0x000009EA
	add r0, r4, r1
	mov r1, #0
	strh r1, [r0]
	ldr r2, _0808372C  @ =0x000009EE
	add r0, r4, r2
	strh r1, [r0]
	mov r0, #150
	lsl r0, r0, #4
	add r1, r4, r0
	mov r0, #128
	lsl r0, r0, #5
	strh r0, [r1]
	bl sub_0808273C
	bl sub_08081C28
	mov r5, #0
	ldr r1, _08083730  @ =0x000018D0
	add r4, r4, r1
_080836E4:
	ldrh r0, [r4]
	cmp r0, #0
	beq _080836F0
	add r0, r5, #0
	bl sub_080835C8
_080836F0:
	add r4, r4, #2
	add r5, r5, #1
	cmp r5, #16
	bne _080836E4
	bl sub_08085978
	bl sub_080829F4
	ldr r0, _08083724  @ =gRam
	ldr r2, _08083734  @ =0x00000A4C
	add r4, r0, r2
	ldrh r1, [r4]
	add r1, r1, #1
	strh r1, [r4]
	ldr r1, _08083738  @ =0x00001A56
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _0808371A
	bl sub_08084720
_0808371A:
	mov r0, #0
	strh r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
_08083724:
	.4byte gRam
_08083728:
	.4byte 0x000009EA
_0808372C:
	.4byte 0x000009EE
_08083730:
	.4byte 0x000018D0
_08083734:
	.4byte 0x00000A4C
_08083738:
	.4byte 0x00001A56
	THUMB_FUNC_END sub_080836B8

