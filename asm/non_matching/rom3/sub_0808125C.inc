	THUMB_FUNC_START sub_0808125C
sub_0808125C: @ 0x0808125C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r3, _080812D8  @ =gRam
	ldr r2, _080812DC  @ =0x0000097C
	add r1, r3, r2
	strh r0, [r1]
	ldr r2, _080812E0  @ =gUnknown_08162C28
	lsl r1, r0, #2
	add r1, r1, r2
	ldr r4, [r1]
	lsl r0, r0, #1
	ldr r5, _080812E4  @ =gUnknown_02002000
	add r0, r0, r5
	ldrh r1, [r0]
	mov r0, #240
	lsl r0, r0, #8
	and r0, r0, r1
	mov r2, #240
	lsl r2, r2, #4
	add r1, r2, #0
	ldr r5, _080812E8  @ =0x00001910
	add r2, r3, r5
	orr r0, r0, r1
	strh r0, [r2]
	mov r6, #0
	ldr r0, _080812EC  @ =0x0000FFFF
	mov r9, r0
	add r7, r2, #0
	ldr r1, _080812F0  @ =gUnknown_081676B2
	mov r8, r1
	ldr r2, _080812F4  @ =0x00001912
	add r5, r3, r2
	sub r0, r0, #255
	mov r12, r0
_080812A4:
	lsl r3, r6, #1
	ldrh r2, [r4]
	strh r2, [r5]
	lsl r0, r2, #16
	lsr r0, r0, #16
	cmp r0, r9
	beq _080812FC
	mov r1, r12
	and r1, r1, r2
	mov r0, #128
	lsl r0, r0, #7
	cmp r1, r0
	beq _080812C4
	ldr r0, _080812F8  @ =0x000001FF
	cmp r1, r0
	bgt _080812D0
_080812C4:
	mov r1, r8
	add r0, r3, r1
	ldrh r1, [r7]
	ldrh r0, [r0]
	orr r1, r1, r0
	strh r1, [r7]
_080812D0:
	add r4, r4, #2
	add r5, r5, #2
	add r6, r6, #1
	b _080812A4
_080812D8:
	.4byte gRam
_080812DC:
	.4byte 0x0000097C
_080812E0:
	.4byte gUnknown_08162C28
_080812E4:
	.4byte gUnknown_02002000
_080812E8:
	.4byte 0x00001910
_080812EC:
	.4byte 0x0000FFFF
_080812F0:
	.4byte gUnknown_081676B2
_080812F4:
	.4byte 0x00001912
_080812F8:
	.4byte 0x000001FF
_080812FC:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0808125C

