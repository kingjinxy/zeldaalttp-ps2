	THUMB_FUNC_START sub_0806AF18
sub_0806AF18: @ 0x0806AF18
	push {r4,lr}
	bl sub_0809E2FC
	ldr r4, _0806AF60  @ =gRam
	ldr r1, _0806AF64  @ =0x00001718
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0806AF5A
	ldr r0, _0806AF68  @ =gSword
	ldrb r0, [r0]
	add r0, r0, #1
	mov r1, #254
	and r0, r0, r1
	cmp r0, #0
	beq _0806AF40
	mov r0, #15
	mov r1, #0
	bl sub_0812A324
_0806AF40:
	ldr r0, _0806AF6C  @ =0x00001885
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	ldr r0, _0806AF70  @ =0x000009E8
	add r1, r4, r0
	mov r0, #32
	strh r0, [r1]
	ldr r0, _0806AF74  @ =0x000009AD
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0806AF5A:
	pop {r4}
	pop {r0}
	bx r0
_0806AF60:
	.4byte gRam
_0806AF64:
	.4byte 0x00001718
_0806AF68:
	.4byte gSword
_0806AF6C:
	.4byte 0x00001885
_0806AF70:
	.4byte 0x000009E8
_0806AF74:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0806AF18

