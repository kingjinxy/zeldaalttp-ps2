	THUMB_FUNC_START sub_08013A60
sub_08013A60: @ 0x08013A60
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	mov r6, #0
	ldr r4, _08013BE8  @ =gUnknown_0201EF30
	add r0, r4, #0
	add r0, r0, #192
	cmp r4, r0
	bcs _08013B3A
	ldr r0, _08013BEC  @ =gUnknown_0201F000
	mov r9, r0
	ldr r1, _08013BF0  @ =0x0000FFFF
	mov r8, r1
_08013A7C:
	ldrh r1, [r4]
	cmp r1, #0
	beq _08013B3A
	mov r5, #128
	lsl r5, r5, #6
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	bne _08013AE2
	ldrb r0, [r4, #2]
	bl sub_08013D20
	add r2, r0, #0
	ldrb r3, [r4, #2]
	add r0, r3, #0
	cmp r0, #255
	beq _08013AB8
	ldrh r0, [r4]
	mov r7, #128
	lsl r7, r7, #5
	add r1, r7, #0
	and r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #28
	lsl r0, r0, #2
	add r0, r0, r9
	ldr r0, [r0]
	and r0, r0, r2
	cmp r0, r2
	bne _08013AE2
_08013AB8:
	mov r0, #255
	strb r0, [r4, #2]
	ldrh r0, [r4]
	ldr r2, _08013BF4  @ =0x00000FFF
	add r1, r2, #0
	and r1, r1, r0
	mov r3, #192
	lsl r3, r3, #8
	add r2, r3, #0
	and r2, r2, r0
	mov r0, #155
	lsl r0, r0, #1
	bl sub_080144F0
	add r0, r4, #0
	bl sub_08013C04
	ldrh r1, [r4]
	add r0, r5, #0
	orr r0, r0, r1
	strh r0, [r4]
_08013AE2:
	ldrb r0, [r4, #3]
	cmp r0, #255
	beq _08013B32
	bl sub_08013D20
	ldrh r2, [r4]
	mov r7, #128
	lsl r7, r7, #5
	add r1, r7, #0
	and r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #28
	lsl r1, r1, #2
	add r1, r1, r9
	ldr r1, [r1]
	and r1, r1, r0
	cmp r1, r0
	bne _08013B22
	mov r0, #255
	strb r0, [r4, #3]
	ldr r1, _08013BF4  @ =0x00000FFF
	add r0, r1, #0
	and r0, r0, r2
	mov r3, #192
	lsl r3, r3, #8
	add r1, r3, #0
	and r1, r1, r2
	bl sub_0801478C
	add r0, r4, #0
	bl sub_08013C04
_08013B22:
	ldrh r1, [r4, #2]
	mov r0, r8
	and r0, r0, r1
	cmp r0, r8
	bne _08013B30
	mov r0, #0
	strh r0, [r4]
_08013B30:
	mov r6, #1
_08013B32:
	add r4, r4, #4
	ldr r0, _08013BF8  @ =gUnknown_0201EFF0
	cmp r4, r0
	bcc _08013A7C
_08013B3A:
	cmp r6, #0
	beq _08013B48
	ldr r0, _08013BE8  @ =gUnknown_0201EF30
	add r1, r0, #0
	add r1, r1, #192
	bl sub_08013C50
_08013B48:
	mov r6, #0
	ldr r4, _08013BFC  @ =gUnknown_02003110
	add r0, r4, #0
	add r0, r0, #192
	cmp r4, r0
	bcs _08013BCE
	ldr r7, _08013BEC  @ =gUnknown_0201F000
	mov r8, r7
	mov r7, #8
_08013B5A:
	ldrh r0, [r4]
	cmp r0, #0
	beq _08013BCE
	ldrb r0, [r4, #2]
	bl sub_08013D20
	ldrh r2, [r4]
	mov r5, #128
	lsl r5, r5, #5
	add r1, r5, #0
	and r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #28
	lsl r1, r1, #2
	add r1, r1, r8
	ldr r1, [r1]
	and r1, r1, r0
	cmp r1, r0
	bne _08013BC6
	ldrb r1, [r4, #2]
	ldrb r0, [r4, #3]
	mov r2, #128
	orr r2, r2, r0
	mov r0, #8
	bl sub_0804C8A8
	add r2, r0, #0
	cmp r2, #0
	beq _08013BC0
	ldrh r1, [r4]
	mov r0, #63
	and r0, r0, r1
	lsl r0, r0, #4
	orr r0, r0, r7
	strh r0, [r2, #50]
	ldrh r0, [r4]
	mov r3, #252
	lsl r3, r3, #4
	add r1, r3, #0
	and r0, r0, r1
	lsr r0, r0, #2
	orr r0, r0, r7
	strh r0, [r2, #54]
	ldrh r1, [r4]
	add r0, r5, #0
	and r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #28
	add r1, r2, #0
	add r1, r1, #82
	strb r0, [r1]
_08013BC0:
	mov r0, #0
	strh r0, [r4]
	mov r6, #1
_08013BC6:
	add r4, r4, #4
	ldr r0, _08013C00  @ =gUnknown_020031D0
	cmp r4, r0
	bcc _08013B5A
_08013BCE:
	cmp r6, #0
	beq _08013BDC
	ldr r0, _08013BFC  @ =gUnknown_02003110
	add r1, r0, #0
	add r1, r1, #192
	bl sub_08013C50
_08013BDC:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_08013BE8:
	.4byte gUnknown_0201EF30
_08013BEC:
	.4byte gUnknown_0201F000
_08013BF0:
	.4byte 0x0000FFFF
_08013BF4:
	.4byte 0x00000FFF
_08013BF8:
	.4byte gUnknown_0201EFF0
_08013BFC:
	.4byte gUnknown_02003110
_08013C00:
	.4byte gUnknown_020031D0
	THUMB_FUNC_END sub_08013A60

