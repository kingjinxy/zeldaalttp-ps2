	THUMB_FUNC_START sub_080B7814
sub_080B7814: @ 0x080B7814
	push {r4-r6,lr}
	sub sp, sp, #40
	ldr r5, _080B78A8  @ =gRam
	ldr r1, _080B78AC  @ =0x00000996
	add r0, r5, r1
	ldrb r0, [r0]
	lsr r0, r0, #1
	mov r1, #2
	and r0, r0, r1
	lsl r0, r0, #24
	ldr r1, _080B78B0  @ =gUnknown_0816FEBE
	str r1, [sp, #20]
	ldr r1, _080B78B4  @ =gUnknown_0816FECC
	str r1, [sp, #24]
	ldr r1, _080B78B8  @ =gUnknown_0816FEDA
	str r1, [sp, #28]
	ldr r1, _080B78BC  @ =gUnknown_08170208
	lsr r0, r0, #25
	lsl r0, r0, #2
	add r1, r0, r1
	ldr r1, [r1]
	str r1, [sp, #32]
	ldr r1, _080B78C0  @ =gUnknown_08170210
	add r0, r0, r1
	ldr r0, [r0]
	str r0, [sp, #36]
	add r1, sp, #12
	mov r0, #103
	strh r0, [r1]
	mov r0, #26
	strh r0, [r1, #2]
	ldr r4, _080B78C4  @ =gUnknown_020068B1
	ldrb r0, [r4]
	lsr r0, r0, #1
	mov r1, #7
	and r0, r0, r1
	add r2, sp, #12
	ldr r1, _080B78C8  @ =gUnknown_08170218
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2, #4]
	mov r1, sp
	add r0, sp, #28
	ldm r0!, {r2,r3,r6}
	stm r1!, {r2,r3,r6}
	ldr r0, [sp, #12]
	ldr r1, [sp, #16]
	ldr r2, [sp, #20]
	ldr r3, [sp, #24]
	bl sub_080B7B40
	ldrb r0, [r4]
	cmp r0, #0
	bne _080B7898
	ldr r0, _080B78CC  @ =gUnknown_020068C3
	ldrb r0, [r0]
	cmp r0, #112
	bne _080B7898
	ldr r0, _080B78D0  @ =0x00001644
	add r1, r5, r0
	mov r0, #255
	strb r0, [r1]
	mov r0, #90
	mov r1, #0
	bl sub_0812A324
_080B7898:
	ldr r4, _080B78C4  @ =gUnknown_020068B1
	ldrb r0, [r4]
	cmp r0, #15
	bne _080B78D8
	ldr r1, _080B78D4  @ =gUnknown_020068C0
	ldrb r0, [r1]
	add r0, r0, #1
	b _080B790E
_080B78A8:
	.4byte gRam
_080B78AC:
	.4byte 0x00000996
_080B78B0:
	.4byte gUnknown_0816FEBE
_080B78B4:
	.4byte gUnknown_0816FECC
_080B78B8:
	.4byte gUnknown_0816FEDA
_080B78BC:
	.4byte gUnknown_08170208
_080B78C0:
	.4byte gUnknown_08170210
_080B78C4:
	.4byte gUnknown_020068B1
_080B78C8:
	.4byte gUnknown_08170218
_080B78CC:
	.4byte gUnknown_020068C3
_080B78D0:
	.4byte 0x00001644
_080B78D4:
	.4byte gUnknown_020068C0
_080B78D8:
	cmp r0, #6
	bne _080B78EE
	ldr r0, _080B7900  @ =gRam
	ldr r1, _080B7904  @ =0x00001643
	add r0, r0, r1
	mov r1, #144
	strb r1, [r0]
	mov r0, #17
	mov r1, #0
	bl sub_0812A324
_080B78EE:
	ldr r1, _080B7908  @ =gUnknown_020068C3
	ldrb r0, [r1]
	cmp r0, #0
	bne _080B790C
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	b _080B7910
	.byte 0x00
	.byte 0x00
_080B7900:
	.4byte gRam
_080B7904:
	.4byte 0x00001643
_080B7908:
	.4byte gUnknown_020068C3
_080B790C:
	sub r0, r0, #1
_080B790E:
	strb r0, [r1]
_080B7910:
	add sp, sp, #40
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080B7814

