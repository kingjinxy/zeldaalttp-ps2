	THUMB_FUNC_START sub_080C1FD0
sub_080C1FD0: @ 0x080C1FD0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r3, _080C2000  @ =gRam
	ldr r1, _080C2004  @ =0x00001072
	add r0, r3, r1
	add r2, r5, r0
	ldrb r0, [r2]
	add r4, r0, #0
	cmp r0, #0
	beq _080C1FFA
	mov r1, #127
	and r1, r1, r0
	cmp r1, #0
	bne _080C2008
	strb r1, [r2]
_080C1FFA:
	mov r0, #0
	b _080C2144
	.byte 0x00
	.byte 0x00
_080C2000:
	.4byte gRam
_080C2004:
	.4byte 0x00001072
_080C2008:
	ldr r1, _080C20B8  @ =0x00000F12
	add r0, r3, r1
	add r0, r5, r0
	ldrb r0, [r0]
	str r0, [sp]
	add r1, r1, #16
	add r0, r3, r1
	add r0, r5, r0
	ldrb r0, [r0]
	str r0, [sp, #4]
	sub r0, r4, #1
	strb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080C2046
	ldr r1, _080C20BC  @ =0x00001112
	add r0, r3, r1
	add r0, r5, r0
	ldrb r0, [r0]
	add r0, r0, #32
	cmp r0, #63
	bgt _080C2042
	sub r1, r1, #16
	add r0, r3, r1
	add r0, r5, r0
	ldrb r0, [r0]
	add r0, r0, #32
	cmp r0, #63
	ble _080C2046
_080C2042:
	mov r0, #144
	strb r0, [r2]
_080C2046:
	ldr r6, _080C20C0  @ =gRam
	ldr r2, _080C20C4  @ =0x00001072
	add r0, r6, r2
	add r2, r5, r0
	ldrb r1, [r2]
	mov r3, #128
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080C2114
	ldrb r0, [r2]
	lsr r0, r0, #2
	ldr r2, _080C20C8  @ =0x00000996
	add r1, r6, r2
	ldrb r2, [r1]
	ldr r1, _080C20CC  @ =gUnknown_08171DC0
	add r0, r0, r1
	ldrb r0, [r0]
	and r2, r2, r0
	cmp r2, #0
	bne _080C2114
	ldr r1, _080C20B8  @ =0x00000F12
	add r0, r6, r1
	add r0, r0, r5
	mov r10, r0
	ldr r2, _080C20D0  @ =0x00001102
	add r0, r6, r2
	add r0, r0, r5
	mov r9, r0
	ldrb r0, [r0]
	mov r1, r10
	strb r0, [r1]
	ldr r2, _080C20D4  @ =0x00000F22
	add r0, r6, r2
	add r0, r0, r5
	mov r8, r0
	ldr r1, _080C20BC  @ =0x00001112
	add r0, r6, r1
	add r7, r5, r0
	ldrb r0, [r7]
	mov r2, r8
	strb r0, [r2]
	ldr r1, _080C20D8  @ =0x00000EA5
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	add r0, r3, #0
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	beq _080C20DC
	add r0, r5, #0
	bl Sprite3_Move
	b _080C2114
	.byte 0x00
	.byte 0x00
_080C20B8:
	.4byte 0x00000F12
_080C20BC:
	.4byte 0x00001112
_080C20C0:
	.4byte gRam
_080C20C4:
	.4byte 0x00001072
_080C20C8:
	.4byte 0x00000996
_080C20CC:
	.4byte gUnknown_08171DC0
_080C20D0:
	.4byte 0x00001102
_080C20D4:
	.4byte 0x00000F22
_080C20D8:
	.4byte 0x00000EA5
_080C20DC:
	add r0, r5, #0
	bl sub_080C79D0
	ldr r2, _080C2100  @ =0x00001042
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	mov r2, #15
	and r2, r2, r0
	cmp r2, #0
	beq _080C210E
	cmp r2, #3
	bhi _080C2104
	strb r4, [r7]
	mov r3, r8
	strb r4, [r3]
	b _080C2114
	.byte 0x00
	.byte 0x00
_080C2100:
	.4byte 0x00001042
_080C2104:
	mov r0, r9
	strb r4, [r0]
	mov r1, r10
	strb r4, [r1]
	b _080C2114
_080C210E:
	add r0, r5, #0
	bl Sprite3_Move
_080C2114:
	ldr r0, _080C2154  @ =gRam
	ldr r2, _080C2158  @ =0x00000F22
	add r1, r0, r2
	add r1, r5, r1
	mov r3, sp
	ldrb r3, [r3, #4]
	strb r3, [r1]
	sub r2, r2, #16
	add r1, r0, r2
	add r1, r5, r1
	mov r3, sp
	ldrb r3, [r3]
	strb r3, [r1]
	ldr r1, _080C215C  @ =0x00000FF2
	add r0, r0, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #122
	bne _080C213C
	b _080C1FFA
_080C213C:
	cmp r0, #206
	bne _080C2142
	b _080C1FFA
_080C2142:
	mov r0, #1
_080C2144:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
_080C2154:
	.4byte gRam
_080C2158:
	.4byte 0x00000F22
_080C215C:
	.4byte 0x00000FF2
	THUMB_FUNC_END sub_080C1FD0

