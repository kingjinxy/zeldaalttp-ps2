	THUMB_FUNC_START sub_080729E4
sub_080729E4: @ 0x080729E4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r0, _08072C48  @ =gRam
	mov r10, r0
	ldr r1, _08072C4C  @ =0x00000B54
	add r1, r1, r10
	mov r9, r1
	ldrh r0, [r1]
	lsr r0, r0, #1
	lsl r0, r0, #1
	ldr r1, _08072C50  @ =gUnknown_02002880
	add r0, r0, r1
	ldr r6, _08072C54  @ =0x00000C0A
	add r6, r6, r10
	ldrh r1, [r6]
	strh r1, [r0]
	ldr r0, _08072C58  @ =gUnknown_0814D5CC
	mov r8, r0
	ldr r7, _08072C5C  @ =0x00000C04
	add r7, r7, r10
	ldrh r0, [r7]
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r4, [r0]
	ldrh r0, [r6]
	bl sub_08092568
	lsl r0, r0, #1
	ldr r1, _08072C60  @ =gUnknown_02018000
	add r2, r0, r1
	ldr r5, _08072C64  @ =gUnknown_08155B4E
	lsl r1, r4, #1
	add r1, r1, r5
	ldrh r1, [r1]
	strh r1, [r2]
	ldr r1, _08072C68  @ =gUnknown_02018040
	add r2, r0, r1
	add r1, r4, #2
	lsl r1, r1, #1
	add r1, r1, r5
	ldrh r1, [r1]
	strh r1, [r2]
	ldr r1, _08072C6C  @ =gUnknown_02018002
	add r2, r0, r1
	add r1, r4, #1
	lsl r1, r1, #1
	add r1, r1, r5
	ldrh r1, [r1]
	strh r1, [r2]
	ldr r1, _08072C70  @ =gUnknown_02018042
	add r0, r0, r1
	add r4, r4, #3
	lsl r4, r4, #1
	add r4, r4, r5
	ldrh r1, [r4]
	strh r1, [r0]
	ldrh r1, [r6]
	mov r0, r9
	ldrh r2, [r0]
	lsr r2, r2, #1
	lsl r2, r2, #1
	ldr r0, _08072C74  @ =gUnknown_02002A80
	add r2, r2, r0
	ldrh r0, [r7]
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r0, [r0]
	strh r0, [r2]
	ldrh r0, [r7]
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r0, [r0]
	mov r2, #0
	bl sub_0808B624
	mov r1, r9
	ldrh r0, [r1]
	lsr r0, r0, #1
	lsl r0, r0, #1
	ldr r1, _08072C78  @ =gUnknown_02002882
	add r0, r0, r1
	ldrh r1, [r6]
	add r1, r1, #2
	strh r1, [r0]
	ldrh r0, [r7]
	add r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r4, [r0]
	ldrh r0, [r6]
	add r0, r0, #2
	bl sub_08092568
	lsl r0, r0, #1
	ldr r1, _08072C60  @ =gUnknown_02018000
	add r2, r0, r1
	lsl r1, r4, #1
	add r1, r1, r5
	ldrh r1, [r1]
	strh r1, [r2]
	ldr r1, _08072C68  @ =gUnknown_02018040
	add r2, r0, r1
	add r1, r4, #2
	lsl r1, r1, #1
	add r1, r1, r5
	ldrh r1, [r1]
	strh r1, [r2]
	ldr r1, _08072C6C  @ =gUnknown_02018002
	add r2, r0, r1
	add r1, r4, #1
	lsl r1, r1, #1
	add r1, r1, r5
	ldrh r1, [r1]
	strh r1, [r2]
	ldr r1, _08072C70  @ =gUnknown_02018042
	add r0, r0, r1
	add r4, r4, #3
	lsl r4, r4, #1
	add r4, r4, r5
	ldrh r1, [r4]
	strh r1, [r0]
	ldrh r1, [r6]
	add r1, r1, #2
	mov r0, r9
	ldrh r2, [r0]
	lsr r2, r2, #1
	lsl r2, r2, #1
	ldr r0, _08072C7C  @ =gUnknown_02002A82
	add r2, r2, r0
	ldrh r0, [r7]
	add r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r0, [r0]
	strh r0, [r2]
	ldrh r0, [r7]
	add r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r0, [r0]
	mov r2, #0
	bl sub_0808B624
	mov r1, r9
	ldrh r0, [r1]
	lsr r0, r0, #1
	lsl r0, r0, #1
	ldr r1, _08072C80  @ =gUnknown_02002884
	add r0, r0, r1
	ldrh r1, [r6]
	add r1, r1, #128
	strh r1, [r0]
	ldrh r0, [r7]
	add r0, r0, #2
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r4, [r0]
	ldrh r0, [r6]
	add r0, r0, #128
	bl sub_08092568
	lsl r0, r0, #1
	ldr r1, _08072C60  @ =gUnknown_02018000
	add r2, r0, r1
	lsl r1, r4, #1
	add r1, r1, r5
	ldrh r1, [r1]
	strh r1, [r2]
	ldr r1, _08072C68  @ =gUnknown_02018040
	add r2, r0, r1
	add r1, r4, #2
	lsl r1, r1, #1
	add r1, r1, r5
	ldrh r1, [r1]
	strh r1, [r2]
	ldr r1, _08072C6C  @ =gUnknown_02018002
	add r2, r0, r1
	add r1, r4, #1
	lsl r1, r1, #1
	add r1, r1, r5
	ldrh r1, [r1]
	strh r1, [r2]
	ldr r1, _08072C70  @ =gUnknown_02018042
	add r0, r0, r1
	add r4, r4, #3
	lsl r4, r4, #1
	add r4, r4, r5
	ldrh r1, [r4]
	strh r1, [r0]
	ldrh r1, [r6]
	add r1, r1, #128
	mov r0, r9
	ldrh r2, [r0]
	lsr r2, r2, #1
	lsl r2, r2, #1
	ldr r0, _08072C84  @ =gUnknown_02002A84
	add r2, r2, r0
	ldrh r0, [r7]
	add r0, r0, #2
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r0, [r0]
	strh r0, [r2]
	ldrh r0, [r7]
	add r0, r0, #2
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r0, [r0]
	mov r2, #0
	bl sub_0808B624
	mov r1, r9
	ldrh r0, [r1]
	lsr r0, r0, #1
	lsl r0, r0, #1
	ldr r1, _08072C88  @ =gUnknown_02002886
	add r0, r0, r1
	ldrh r1, [r6]
	add r1, r1, #130
	strh r1, [r0]
	ldrh r0, [r7]
	add r0, r0, #3
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r4, [r0]
	ldrh r0, [r6]
	add r0, r0, #130
	bl sub_08092568
	lsl r0, r0, #1
	ldr r1, _08072C60  @ =gUnknown_02018000
	add r2, r0, r1
	lsl r1, r4, #1
	add r1, r1, r5
	ldrh r1, [r1]
	strh r1, [r2]
	ldr r1, _08072C68  @ =gUnknown_02018040
	add r2, r0, r1
	add r1, r4, #2
	lsl r1, r1, #1
	add r1, r1, r5
	ldrh r1, [r1]
	strh r1, [r2]
	ldr r1, _08072C6C  @ =gUnknown_02018002
	add r2, r0, r1
	add r1, r4, #1
	lsl r1, r1, #1
	add r1, r1, r5
	ldrh r1, [r1]
	strh r1, [r2]
	ldr r1, _08072C70  @ =gUnknown_02018042
	add r0, r0, r1
	add r4, r4, #3
	lsl r4, r4, #1
	add r4, r4, r5
	ldrh r1, [r4]
	strh r1, [r0]
	ldrh r1, [r6]
	add r1, r1, #130
	mov r0, r9
	ldrh r2, [r0]
	lsr r2, r2, #1
	lsl r2, r2, #1
	ldr r0, _08072C8C  @ =gUnknown_02002A86
	add r2, r2, r0
	ldrh r0, [r7]
	add r0, r0, #3
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r0, [r0]
	strh r0, [r2]
	ldrh r0, [r7]
	add r0, r0, #3
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r0, [r0]
	mov r2, #0
	bl sub_0808B624
	mov r1, r9
	ldrh r0, [r1]
	add r0, r0, #8
	strh r0, [r1]
	ldr r2, _08072C90  @ =0x00000C02
	add r2, r2, r10
	ldrh r0, [r2]
	add r1, r0, #1
	strh r1, [r2]
	ldrh r0, [r7]
	cmp r0, #16
	bne _08072C34
	add r0, r1, #1
	strh r0, [r2]
_08072C34:
	ldrh r0, [r7]
	add r0, r0, #1
	strh r0, [r7]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08072C48:
	.4byte gRam
_08072C4C:
	.4byte 0x00000B54
_08072C50:
	.4byte gUnknown_02002880
_08072C54:
	.4byte 0x00000C0A
_08072C58:
	.4byte gUnknown_0814D5CC
_08072C5C:
	.4byte 0x00000C04
_08072C60:
	.4byte gUnknown_02018000
_08072C64:
	.4byte gUnknown_08155B4E
_08072C68:
	.4byte gUnknown_02018040
_08072C6C:
	.4byte gUnknown_02018002
_08072C70:
	.4byte gUnknown_02018042
_08072C74:
	.4byte gUnknown_02002A80
_08072C78:
	.4byte gUnknown_02002882
_08072C7C:
	.4byte gUnknown_02002A82
_08072C80:
	.4byte gUnknown_02002884
_08072C84:
	.4byte gUnknown_02002A84
_08072C88:
	.4byte gUnknown_02002886
_08072C8C:
	.4byte gUnknown_02002A86
_08072C90:
	.4byte 0x00000C02
	THUMB_FUNC_END sub_080729E4

