	THUMB_FUNC_START sub_080887CC
sub_080887CC: @ 0x080887CC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	mov r6, #0
	mov r5, #0
	ldr r0, _080888C0  @ =0x000003FF
	mov r10, r0
	ldr r1, _080888C4  @ =gUnknown_02002E40
	mov r9, r1
	ldr r7, _080888C8  @ =gUnknown_03002B94
	add r2, r7, #4
	mov r8, r2
	mov r0, #192
	lsl r0, r0, #4
	mov r12, r0
_080887EE:
	lsl r4, r6, #1
	ldr r1, _080888CC  @ =gUnknown_0201A002
	add r2, r4, r1
	ldrh r1, [r2]
	mov r0, r10
	and r0, r0, r1
	add r0, r0, r9
	ldrb r1, [r0]
	strh r1, [r7]
	ldrh r2, [r2]
	mov r0, r8
	strh r2, [r0]
	add r0, r1, #0
	sub r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bhi _0808881C
	mov r0, r12
	and r0, r0, r2
	lsr r0, r0, #10
	orr r1, r1, r0
	strh r1, [r7]
_0808881C:
	ldr r1, _080888D0  @ =gUnknown_0201A000
	add r0, r4, r1
	ldrh r2, [r0]
	mov r0, r10
	and r0, r0, r2
	add r0, r0, r9
	ldrb r1, [r0]
	mov r0, r8
	strh r2, [r0]
	add r3, r1, #0
	add r0, r3, #0
	sub r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bhi _08088844
	mov r0, r12
	and r0, r0, r2
	lsr r1, r0, #10
	orr r1, r1, r3
_08088844:
	ldr r2, _080888D4  @ =gUnknown_0200DBA0
	add r0, r5, r2
	strb r1, [r0]
	ldr r0, _080888D8  @ =gUnknown_0200DBA1
	add r1, r5, r0
	ldrb r0, [r7]
	strb r0, [r1]
	ldr r1, _080888DC  @ =gUnknown_0201A802
	add r2, r4, r1
	ldrh r1, [r2]
	mov r0, r10
	and r0, r0, r1
	add r0, r0, r9
	ldrb r1, [r0]
	strh r1, [r7]
	ldrh r2, [r2]
	mov r0, r8
	strh r2, [r0]
	add r0, r1, #0
	sub r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bhi _0808887E
	mov r0, r12
	and r0, r0, r2
	lsr r0, r0, #10
	orr r1, r1, r0
	strh r1, [r7]
_0808887E:
	ldr r1, _080888E0  @ =gUnknown_0201A800
	add r0, r4, r1
	ldrh r2, [r0]
	mov r0, r10
	and r0, r0, r2
	add r0, r0, r9
	ldrb r1, [r0]
	mov r0, r8
	strh r2, [r0]
	add r3, r1, #0
	add r0, r3, #0
	sub r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bhi _080888A6
	mov r0, r12
	and r0, r0, r2
	lsr r1, r0, #10
	orr r1, r1, r3
_080888A6:
	ldr r2, _080888E4  @ =gUnknown_0200DBC0
	add r0, r5, r2
	strb r1, [r0]
	ldr r0, _080888E8  @ =gUnknown_0200DBC1
	add r1, r5, r0
	ldrb r0, [r7]
	strb r0, [r1]
	mov r0, #31
	and r0, r0, r5
	cmp r0, #30
	bne _080888EC
	add r5, r5, #34
	b _080888EE
_080888C0:
	.4byte 0x000003FF
_080888C4:
	.4byte gUnknown_02002E40
_080888C8:
	.4byte gUnknown_03002B94
_080888CC:
	.4byte gUnknown_0201A002
_080888D0:
	.4byte gUnknown_0201A000
_080888D4:
	.4byte gUnknown_0200DBA0
_080888D8:
	.4byte gUnknown_0200DBA1
_080888DC:
	.4byte gUnknown_0201A802
_080888E0:
	.4byte gUnknown_0201A800
_080888E4:
	.4byte gUnknown_0200DBC0
_080888E8:
	.4byte gUnknown_0200DBC1
_080888EC:
	add r5, r5, #2
_080888EE:
	add r6, r6, #2
	mov r0, #128
	lsl r0, r0, #3
	cmp r6, r0
	bne _080888FA
	add r6, r6, r6
_080888FA:
	cmp r6, r12
	beq _08088900
	b _080887EE
_08088900:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080887CC

	.byte 0x00
	.byte 0x00
