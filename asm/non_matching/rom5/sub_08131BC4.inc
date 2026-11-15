	THUMB_FUNC_START sub_08131BC4
sub_08131BC4: @ 0x08131BC4
	push {r4,r5,lr}
	ldr r4, _08131C08  @ =gRam
	ldr r0, _08131C0C  @ =0x00000CFA
	add r5, r4, r0
	ldrh r0, [r5]
	cmp r0, #255
	beq _08131C00
	mov r0, #32
	mov r1, #128
	bl sub_08131998
	ldr r0, _08131C10  @ =0x00000CF8
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #32
	bne _08131BF8
	mov r0, #255
	strh r0, [r5]
	ldr r0, _08131C14  @ =0x000009B5
	add r1, r4, r0
	mov r0, #0
	strb r0, [r1]
_08131BF8:
	ldr r0, _08131C18  @ =0x0000099B
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
_08131C00:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08131C08:
	.4byte gRam
_08131C0C:
	.4byte 0x00000CFA
_08131C10:
	.4byte 0x00000CF8
_08131C14:
	.4byte 0x000009B5
_08131C18:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08131BC4

