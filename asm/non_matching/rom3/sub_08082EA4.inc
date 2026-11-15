	THUMB_FUNC_START sub_08082EA4
sub_08082EA4: @ 0x08082EA4
	push {r4-r6,lr}
	ldr r3, _08082F68  @ =gRam
	lsl r2, r0, #1
	ldr r1, _08082F6C  @ =0x000018F0
	add r0, r3, r1
	add r0, r2, r0
	ldrh r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _08082F78
	ldr r6, _08082F70  @ =0x000018D0
	add r0, r3, r6
	add r0, r2, r0
	ldrh r0, [r0]
	lsr r2, r0, #1
	mov r0, #150
	lsl r0, r0, #4
	add r1, r3, r0
	mov r0, #12
	strh r0, [r1]
	mov r5, #2
	mov r4, #1
	mov r3, #0
_08082ED4:
	ldr r6, _08082F74  @ =gUnknown_0200CBA0
	add r0, r2, r6
	strb r5, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r4, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r4, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r5, [r0]
	add r2, r2, #64
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08082ED4
	b _080830AA
_08082F68:
	.4byte gRam
_08082F6C:
	.4byte 0x000018F0
_08082F70:
	.4byte 0x000018D0
_08082F74:
	.4byte gUnknown_0200CBA0
_08082F78:
	ldr r1, _080830B0  @ =0x000018D0
	add r0, r3, r1
	add r0, r2, r0
	ldrh r0, [r0]
	lsr r2, r0, #1
	mov r6, #150
	lsl r6, r6, #4
	add r1, r3, r6
	mov r0, #5
	strh r0, [r1]
	mov r5, #1
	mov r4, #2
	mov r3, #0
_08082F92:
	ldr r6, _080830B4  @ =gUnknown_0200CBA0
	add r0, r2, r6
	strb r5, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r5, [r0]
	ldr r6, _080830B8  @ =gUnknown_0200D0E0
	add r0, r2, r6
	strb r5, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r5, [r0]
	ldr r6, _080830BC  @ =gUnknown_0200CBE0
	add r0, r2, r6
	strb r4, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r4, [r0]
	ldr r6, _080830C0  @ =gUnknown_0200D0A0
	add r0, r2, r6
	strb r4, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r4, [r0]
	ldr r6, _080830C4  @ =gUnknown_0200CC20
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #63
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #63
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #63
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #63
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #63
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #63
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #63
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #63
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #63
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #63
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #63
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #63
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #63
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #63
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #63
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #63
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #63
	add r0, r2, r6
	strb r3, [r0]
	add r6, r6, #1
	add r0, r2, r6
	strb r3, [r0]
	add r2, r2, #2
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	beq _080830AA
	b _08082F92
_080830AA:
	pop {r4-r6}
	pop {r0}
	bx r0
_080830B0:
	.4byte 0x000018D0
_080830B4:
	.4byte gUnknown_0200CBA0
_080830B8:
	.4byte gUnknown_0200D0E0
_080830BC:
	.4byte gUnknown_0200CBE0
_080830C0:
	.4byte gUnknown_0200D0A0
_080830C4:
	.4byte gUnknown_0200CC20
	THUMB_FUNC_END sub_08082EA4

