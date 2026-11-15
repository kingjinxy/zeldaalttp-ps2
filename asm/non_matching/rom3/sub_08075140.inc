	THUMB_FUNC_START sub_08075140
sub_08075140: @ 0x08075140
	push {r4,r5,lr}
	ldr r5, _08075154  @ =gRam
	ldr r0, _08075158  @ =0x00001AE2
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _0807515C
	cmp r0, #1
	beq _0807519C
	b _080751BC
_08075154:
	.4byte gRam
_08075158:
	.4byte 0x00001AE2
_0807515C:
	strb r0, [r1]
	mov r0, #118
	mov r1, #0
	bl sub_0812A324
	mov r0, #200
	lsl r0, r0, #1
	bl sub_080AF4FC
	ldr r0, _08075190  @ =0x000009AD
	add r1, r5, r0
	mov r0, #11
	strb r0, [r1]
	ldr r0, _08075194  @ =0x000009E8
	add r1, r5, r0
	mov r2, #0
	mov r0, #5
	strh r0, [r1]
	ldr r1, _08075198  @ =0x000009EC
	add r0, r5, r1
	strb r2, [r0]
	mov r0, #1
	bl sub_08129EAC
	b _080751BC
	.byte 0x00
	.byte 0x00
_08075190:
	.4byte 0x000009AD
_08075194:
	.4byte 0x000009E8
_08075198:
	.4byte 0x000009EC
_0807519C:
	mov r4, #0
	strb r4, [r1]
	mov r0, #119
	mov r1, #0
	bl sub_0812A324
	ldr r0, _080751C4  @ =0x00000189
	bl sub_080AF4FC
	ldr r0, _080751C8  @ =0x000009AD
	add r1, r5, r0
	mov r0, #11
	strb r0, [r1]
	ldr r1, _080751CC  @ =0x000009E8
	add r0, r5, r1
	strh r4, [r0]
_080751BC:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080751C4:
	.4byte 0x00000189
_080751C8:
	.4byte 0x000009AD
_080751CC:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08075140

