	THUMB_FUNC_START sub_08075098
sub_08075098: @ 0x08075098
	push {r4-r6,lr}
	ldr r5, _080750B0  @ =gRam
	ldr r0, _080750B4  @ =0x00001AE2
	add r6, r5, r0
	ldrb r4, [r6]
	cmp r4, #1
	beq _080750E0
	cmp r4, #1
	bgt _080750B8
	cmp r4, #0
	beq _080750BE
	b _08075130
_080750B0:
	.4byte gRam
_080750B4:
	.4byte 0x00001AE2
_080750B8:
	cmp r4, #2
	beq _0807510C
	b _08075130
_080750BE:
	ldr r1, _080750D8  @ =0x000009E8
	add r0, r5, r1
	strh r4, [r0]
	mov r0, #118
	mov r1, #0
	bl sub_0812A324
	ldr r1, _080750DC  @ =0x00001AEE
	add r0, r5, r1
	ldrb r0, [r0]
	strb r0, [r6]
	b _08075130
	.byte 0x00
	.byte 0x00
_080750D8:
	.4byte 0x000009E8
_080750DC:
	.4byte 0x00001AEE
_080750E0:
	mov r0, #0
	strb r0, [r6]
	mov r0, #118
	mov r1, #0
	bl sub_0812A324
	mov r0, #197
	lsl r0, r0, #1
	bl sub_080AF4FC
	ldr r0, _08075104  @ =0x000009AD
	add r1, r5, r0
	mov r0, #11
	strb r0, [r1]
	ldr r1, _08075108  @ =0x000009E8
	add r0, r5, r1
	strh r4, [r0]
	b _08075130
_08075104:
	.4byte 0x000009AD
_08075108:
	.4byte 0x000009E8
_0807510C:
	mov r0, #0
	strb r0, [r6]
	mov r0, #118
	mov r1, #0
	bl sub_0812A324
	mov r0, #198
	lsl r0, r0, #1
	bl sub_080AF4FC
	ldr r0, _08075138  @ =0x000009AD
	add r1, r5, r0
	mov r0, #11
	strb r0, [r1]
	ldr r0, _0807513C  @ =0x000009E8
	add r1, r5, r0
	mov r0, #3
	strh r0, [r1]
_08075130:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08075138:
	.4byte 0x000009AD
_0807513C:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08075098

