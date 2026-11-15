	THUMB_FUNC_START sub_08114A3C
sub_08114A3C: @ 0x08114A3C
	push {lr}
	ldr r0, _08114AA4  @ =gRam
	ldr r2, _08114AA8  @ =0x000009AD
	add r1, r0, r2
	ldrb r1, [r1]
	add r2, r0, #0
	cmp r1, #0
	bne _08114AC8
	ldr r1, _08114AAC  @ =0x00001702
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #1
	beq _08114AC8
	ldr r1, _08114AB0  @ =0x00001791
	add r0, r2, r1
	ldrb r1, [r0]
	mov r3, #128
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	bne _08114AC8
	ldr r1, _08114AB4  @ =0x00001787
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08114AC8
	ldr r1, _08114AB8  @ =0x00001755
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08114AC8
	ldr r1, _08114ABC  @ =0x00001754
	add r0, r2, r1
	ldrb r0, [r0]
	ldr r1, _08114AC0  @ =gUnknown_0200EBF0
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _08114A90
	and r0, r0, r3
	cmp r0, #0
	beq _08114AC8
_08114A90:
	ldr r1, _08114AC4  @ =0x00000546
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08114AC8
	bl sub_08114AD0
	b _08114ACA
_08114AA4:
	.4byte gRam
_08114AA8:
	.4byte 0x000009AD
_08114AAC:
	.4byte 0x00001702
_08114AB0:
	.4byte 0x00001791
_08114AB4:
	.4byte 0x00001787
_08114AB8:
	.4byte 0x00001755
_08114ABC:
	.4byte 0x00001754
_08114AC0:
	.4byte gUnknown_0200EBF0
_08114AC4:
	.4byte 0x00000546
_08114AC8:
	mov r0, #1
_08114ACA:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08114A3C

	.byte 0x00
	.byte 0x00
