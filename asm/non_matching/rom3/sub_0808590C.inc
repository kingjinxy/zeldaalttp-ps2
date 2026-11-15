	THUMB_FUNC_START sub_0808590C
sub_0808590C: @ 0x0808590C
	push {r4,r5,lr}
	ldr r2, _08085944  @ =gRam
	lsl r4, r0, #1
	ldr r3, _08085948  @ =0x000018D0
	add r1, r2, r3
	add r1, r4, r1
	ldrh r3, [r1]
	mov r5, #151
	lsl r5, r5, #4
	add r1, r2, r5
	strh r3, [r1]
	ldr r3, _0808594C  @ =0x00000B08
	add r1, r2, r3
	strh r0, [r1]
	ldr r5, _08085950  @ =0x00000C06
	add r1, r2, r5
	strh r0, [r1]
	ldr r0, _08085954  @ =0x000018F0
	add r2, r2, r0
	add r4, r4, r2
	ldrh r0, [r4]
	mov r1, #3
	and r1, r1, r0
	cmp r1, #0
	bne _08085958
	bl sub_08085690
	b _08085970
_08085944:
	.4byte gRam
_08085948:
	.4byte 0x000018D0
_0808594C:
	.4byte 0x00000B08
_08085950:
	.4byte 0x00000C06
_08085954:
	.4byte 0x000018F0
_08085958:
	cmp r1, #1
	bne _08085962
	bl sub_08085734
	b _08085970
_08085962:
	cmp r1, #2
	bne _0808596C
	bl sub_080857D4
	b _08085970
_0808596C:
	bl sub_08085870
_08085970:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0808590C

	.byte 0x00
	.byte 0x00
