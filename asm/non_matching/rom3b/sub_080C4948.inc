	THUMB_FUNC_START sub_080C4948
sub_080C4948: @ 0x080C4948
	push {r4-r7,lr}
	add r6, r0, #0
	lsl r1, r1, #24
	lsr r4, r1, #24
	mov r0, #1
	strb r0, [r6]
	ldr r5, _080C4994  @ =gRam
	ldr r1, _080C4998  @ =0x000010C2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080C498A
	mov r2, #161
	lsl r2, r2, #4
	add r0, r5, r2
	ldr r2, _080C499C  @ =0x000010F2
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #0
	bne _080C498A
	ldr r1, _080C49A0  @ =0x000016F6
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #128
	bne _080C49A4
_080C498A:
	add r0, r6, #0
	bl sub_080C53D8
	b _080C4A28
	.byte 0x00
	.byte 0x00
_080C4994:
	.4byte gRam
_080C4998:
	.4byte 0x000010C2
_080C499C:
	.4byte 0x000010F2
_080C49A0:
	.4byte 0x000016F6
_080C49A4:
	bl sub_080C3C98
	add r0, r4, #0
	bl sub_080C4574
	bl sub_080C466C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080C49C0
	add r0, r6, #0
	bl sub_080C53D8
	b _080C4A28
_080C49C0:
	ldr r2, _080C49F8  @ =0x000016F9
	add r0, r5, r2
	strb r7, [r0]
	ldr r1, _080C49FC  @ =0x0000180C
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	bne _080C4A60
	ldr r2, _080C4A00  @ =0x0000178A
	add r0, r5, r2
	ldrb r1, [r0]
	mov r0, #10
	and r0, r0, r1
	cmp r0, #0
	beq _080C4A20
	ldr r1, _080C4A04  @ =0x00000FF2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #213
	bls _080C4A08
	add r0, r6, #0
	bl sub_080C53D8
	b _080C4A28
	.byte 0x00
	.byte 0x00
_080C49F8:
	.4byte 0x000016F9
_080C49FC:
	.4byte 0x0000180C
_080C4A00:
	.4byte 0x0000178A
_080C4A04:
	.4byte 0x00000FF2
_080C4A08:
	ldr r2, _080C4A30  @ =0x00000FA2
	add r0, r5, r2
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #11
	bne _080C4A20
	ldr r2, _080C4A34  @ =0x0000142C
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C4A38
_080C4A20:
	add r0, r6, #0
	add r1, r4, #0
	bl sub_080C4A70
_080C4A28:
	lsl r0, r0, #24
	lsr r0, r0, #24
	b _080C4A62
	.byte 0x00
	.byte 0x00
_080C4A30:
	.4byte 0x00000FA2
_080C4A34:
	.4byte 0x0000142C
_080C4A38:
	mov r0, #2
	strb r0, [r1]
	ldr r1, _080C4A68  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
	ldr r0, _080C4A6C  @ =0x00001012
	add r2, r5, r0
	add r2, r4, r2
	ldrb r1, [r2]
	mov r0, #224
	and r0, r0, r1
	mov r1, #3
	orr r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	mov r1, #109
	bl sub_080CF0AC
_080C4A60:
	mov r0, #1
_080C4A62:
	pop {r4-r7}
	pop {r1}
	bx r1
_080C4A68:
	.4byte 0x00000FC2
_080C4A6C:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080C4948

