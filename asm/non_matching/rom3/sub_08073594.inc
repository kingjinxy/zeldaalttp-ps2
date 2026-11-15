	THUMB_FUNC_START sub_08073594
sub_08073594: @ 0x08073594
	push {r4-r6,lr}
	ldr r5, _080735B8  @ =gRam
	ldr r0, _080735BC  @ =0x000009C6
	add r6, r5, r0
	ldrh r0, [r6]
	cmp r0, #127
	bls _080735C8
	ldr r1, _080735C0  @ =0x000009AD
	add r0, r5, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _080735C4  @ =0x000009E8
	add r0, r5, r2
	strh r1, [r0]
	add r2, r2, #100
	add r0, r5, r2
	strh r1, [r0]
	b _08073624
_080735B8:
	.4byte gRam
_080735BC:
	.4byte 0x000009C6
_080735C0:
	.4byte 0x000009AD
_080735C4:
	.4byte 0x000009E8
_080735C8:
	ldr r0, _0807362C  @ =0x00000A3C
	add r1, r5, r0
	mov r4, #0
	mov r0, #24
	strh r0, [r1]
	ldr r2, _08073630  @ =0x00000CB4
	add r1, r5, r2
	mov r0, #8
	strb r0, [r1]
	ldr r0, _08073634  @ =0x000017AA
	add r1, r5, r0
	mov r0, #144
	strb r0, [r1]
	bl sub_0807545C
	ldr r1, _08073638  @ =0x0000165C
	add r2, r5, r1
	ldrh r1, [r2]
	mov r0, #64
	eor r1, r1, r0
	strh r1, [r2]
	mov r2, #183
	lsl r2, r2, #4
	add r0, r5, r2
	strh r4, [r0]
	ldrh r2, [r6]
	mov r0, #63
	and r0, r0, r2
	orr r0, r0, r1
	strh r0, [r6]
	mov r2, #171
	lsl r2, r2, #4
	add r1, r5, r2
	strh r0, [r1]
	ldr r1, _0807363C  @ =0x00000A4C
	add r0, r5, r1
	strh r4, [r0]
	bl sub_08133534
	bl sub_0806A0C0
	ldr r2, _08073640  @ =0x000009E8
	add r1, r5, r2
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_08073624:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807362C:
	.4byte 0x00000A3C
_08073630:
	.4byte 0x00000CB4
_08073634:
	.4byte 0x000017AA
_08073638:
	.4byte 0x0000165C
_0807363C:
	.4byte 0x00000A4C
_08073640:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08073594

