	THUMB_FUNC_START sub_08070A24
sub_08070A24: @ 0x08070A24
	push {lr}
	bl sub_080CB278
	ldr r3, _08070A4C  @ =gRam
	ldr r1, _08070A50  @ =0x00000CF5
	add r0, r3, r1
	ldr r2, _08070A54  @ =0x00000CF6
	add r1, r3, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	beq _08070A70
	cmp r2, #0
	beq _08070A5C
	ldr r1, _08070A58  @ =0x00000B02
	add r0, r3, r1
	ldrh r0, [r0]
	b _08070A5E
	.byte 0x00
	.byte 0x00
_08070A4C:
	.4byte gRam
_08070A50:
	.4byte 0x00000CF5
_08070A54:
	.4byte 0x00000CF6
_08070A58:
	.4byte 0x00000B02
_08070A5C:
	mov r0, #3
_08070A5E:
	bl sub_0806C4EC
	bl sub_08070CC8
	ldr r0, _08070A78  @ =gRam
	ldr r2, _08070A7C  @ =0x00000CFC
	add r0, r0, r2
	mov r1, #0
	strh r1, [r0]
_08070A70:
	bl sub_0806C620
	pop {r0}
	bx r0
_08070A78:
	.4byte gRam
_08070A7C:
	.4byte 0x00000CFC
	THUMB_FUNC_END sub_08070A24

