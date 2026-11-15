	THUMB_FUNC_START sub_080C2840
sub_080C2840: @ 0x080C2840
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	mov r2, #15
	ldr r6, _080C28F0  @ =gRam
	mov r0, #48
	mov r8, r0
	ldr r1, _080C28F4  @ =0x00000FF2
	add r1, r1, r6
	mov r9, r1
_080C2856:
	lsl r2, r2, #24
	asr r4, r2, #24
	ldr r1, _080C28F8  @ =0x00000E75
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #2
	and r1, r1, r0
	add r7, r2, #0
	cmp r1, #0
	beq _080C28D6
	ldr r1, _080C28FC  @ =0x00001062
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _080C28D6
	ldr r1, _080C2900  @ =0x00001610
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #14
	beq _080C2892
	lsr r0, r7, #24
	bl sub_080C4574
	bl sub_080C466C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080C28D6
_080C2892:
	mov r0, #0
	strb r0, [r5]
	mov r0, #94
	mov r1, #0
	bl sub_0812A324
	ldr r1, _080C2904  @ =0x00001152
	add r0, r6, r1
	add r0, r4, r0
	mov r1, r8
	strb r1, [r0]
	ldr r1, _080C2908  @ =0x00000F22
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
	ldr r1, _080C290C  @ =0x000010B2
	add r0, r6, r1
	add r0, r4, r0
	mov r1, r8
	strb r1, [r0]
	ldr r1, _080C2910  @ =0x00000D74
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
	mov r1, r9
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #216
	bne _080C28D6
	lsr r0, r7, #24
	bl sub_080C2914
_080C28D6:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r7, r1
	lsr r2, r0, #24
	cmp r0, #0
	bge _080C2856
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C28F0:
	.4byte gRam
_080C28F4:
	.4byte 0x00000FF2
_080C28F8:
	.4byte 0x00000E75
_080C28FC:
	.4byte 0x00001062
_080C2900:
	.4byte 0x00001610
_080C2904:
	.4byte 0x00001152
_080C2908:
	.4byte 0x00000F22
_080C290C:
	.4byte 0x000010B2
_080C2910:
	.4byte 0x00000D74
	THUMB_FUNC_END sub_080C2840

