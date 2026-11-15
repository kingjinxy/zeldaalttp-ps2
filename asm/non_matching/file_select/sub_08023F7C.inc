	THUMB_FUNC_START sub_08023F7C
sub_08023F7C: @ 0x08023F7C
	push {r4,lr}
	add r4, r0, #0
	bl sub_08024D7C
	lsl r0, r0, #24
	cmp r0, #0
	bne _08023F8C
	b _080240B4
_08023F8C:
	ldrb r0, [r4, #11]
	cmp r0, #1
	beq _08023FDC
	cmp r0, #1
	bgt _08023F9C
	cmp r0, #0
	beq _08023FA2
	b _0802408A
_08023F9C:
	cmp r0, #2
	beq _08024024
	b _0802408A
_08023FA2:
	mov r0, #1
	strb r0, [r4, #20]
	mov r0, #120
	strb r0, [r4, #23]
	mov r0, #150
	strb r0, [r4, #24]
	add r0, r0, #106
	str r0, [r4, #12]
	ldr r1, _08023FD4  @ =gUnknown_08427688
	ldr r0, _08023FD8  @ =gUnknown_03006C80
	ldrb r0, [r0, #6]
	sub r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	add r1, r4, #0
	add r1, r1, #69
	strb r0, [r1]
	add r1, r1, #55
	mov r0, #16
	strh r0, [r1]
	add r0, r4, #0
	mov r1, #3
	bl 0x08003870
	b _0802408A
_08023FD4:
	.4byte gUnknown_08427688
_08023FD8:
	.4byte gUnknown_03006C80
_08023FDC:
	mov r0, #7
	strb r0, [r4, #20]
	mov r0, #60
	strb r0, [r4, #23]
	ldr r1, _0802401C  @ =gUnknown_0842768B
	ldr r0, _08024020  @ =gUnknown_03006C80
	ldrb r0, [r0, #6]
	sub r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	add r1, r4, #0
	add r1, r1, #69
	strb r0, [r1]
	add r1, r1, #55
	mov r0, #16
	strh r0, [r1]
	add r0, r4, #0
	mov r1, #3
	bl 0x08003870
	mov r0, #15
	mov r1, #2
	mov r2, #32
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _0802408A
	add r0, r4, #0
	bl sub_0803D3D0
	b _0802408A
_0802401C:
	.4byte gUnknown_0842768B
_08024020:
	.4byte gUnknown_03006C80
_08024024:
	mov r0, #14
	strb r0, [r4, #20]
	mov r0, #150
	strb r0, [r4, #23]
	add r0, r0, #106
	str r0, [r4, #12]
	ldr r1, _080240BC  @ =gUnknown_0842768E
	ldr r0, _080240C0  @ =gUnknown_03006C80
	ldrb r0, [r0, #6]
	sub r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	add r1, r4, #0
	add r1, r1, #69
	strb r0, [r1]
	add r1, r1, #55
	mov r0, #16
	strh r0, [r1]
	bl 0x0800099C
	mov r1, #31
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	ldrb r1, [r1]
	add r1, r1, #2
	asr r1, r1, #2
	mov r0, #7
	and r1, r1, r0
	add r0, r4, #0
	add r0, r0, #42
	strb r1, [r0]
	add r1, r1, #20
	add r0, r4, #0
	bl 0x08003870
	mov r0, #15
	mov r1, #2
	mov r2, #32
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _08024084
	add r0, r4, #0
	bl sub_0803D3D0
_08024084:
	mov r0, #158
	bl 0x08003DFC
_0802408A:
	ldr r0, [r4, #84]
	ldrb r1, [r0, #30]
	lsl r1, r1, #28
	lsr r1, r1, #28
	lsl r0, r1, #4
	orr r0, r0, r1
	strb r0, [r4, #30]
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldr r0, _080240C4  @ =gUnknown_0813C164
	str r0, [r4, #72]
	bl 0x0800099C
	add r1, r4, #0
	add r1, r1, #127
	strb r0, [r1]
_080240B4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080240BC:
	.4byte gUnknown_0842768E
_080240C0:
	.4byte gUnknown_03006C80
_080240C4:
	.4byte gUnknown_0813C164
	THUMB_FUNC_END sub_08023F7C

