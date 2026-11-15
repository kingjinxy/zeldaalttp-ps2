	THUMB_FUNC_START sub_0810072C
sub_0810072C: @ 0x0810072C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _081007FC  @ =gRam
	ldr r2, _08100800  @ =0x00000EE2
	add r1, r4, r2
	add r1, r0, r1
	ldrb r3, [r1]
	ldr r5, _08100804  @ =0x00000F02
	add r1, r4, r5
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #8
	add r3, r3, r1
	lsl r3, r3, #16
	lsr r6, r3, #16
	sub r2, r2, #16
	add r1, r4, r2
	add r1, r0, r1
	ldrb r2, [r1]
	sub r5, r5, #16
	add r1, r4, r5
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	lsl r2, r2, #16
	lsr r5, r2, #16
	ldr r0, _08100808  @ =gUnknown_03002B98
	strb r6, [r0]
	lsr r3, r3, #24
	ldr r1, _0810080C  @ =gUnknown_03002BA4
	strb r3, [r1]
	ldr r0, _08100810  @ =gUnknown_03002B99
	strb r5, [r0]
	lsr r2, r2, #24
	ldr r1, _08100814  @ =0x00000975
	add r1, r1, r4
	mov r10, r1
	strb r2, [r1]
	ldr r2, _08100818  @ =0x0000096C
	add r2, r2, r4
	mov r8, r2
	mov r0, #16
	mov r9, r0
	mov r1, r9
	strb r1, [r2]
	ldr r2, _0810081C  @ =0x0000096D
	add r7, r4, r2
	mov r0, #24
	strb r0, [r7]
	bl sub_080C44FC
	bl sub_080C466C
	lsl r0, r0, #24
	cmp r0, #0
	beq _081007AC
	bl sub_080C51A8
_081007AC:
	add r0, r6, #0
	sub r0, r0, #8
	add r1, r5, #0
	add r1, r1, #16
	ldr r5, _08100808  @ =gUnknown_03002B98
	strb r0, [r5]
	lsr r0, r0, #8
	ldr r2, _0810080C  @ =gUnknown_03002BA4
	strb r0, [r2]
	ldr r5, _08100810  @ =gUnknown_03002B99
	strb r1, [r5]
	lsr r1, r1, #8
	mov r0, r10
	strb r1, [r0]
	mov r0, #32
	mov r1, r8
	strb r0, [r1]
	mov r2, r9
	strb r2, [r7]
	bl sub_080C44FC
	bl sub_080C466C
	lsl r0, r0, #24
	cmp r0, #0
	beq _081007F6
	ldr r1, _08100820  @ =gUnknown_03003E70
	mov r0, #1
	strb r0, [r1]
	ldr r5, _08100824  @ =0x00000546
	add r0, r4, r5
	ldrh r1, [r0]
	mov r0, #129
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _08100828
_081007F6:
	mov r0, #0
	b _08100832
	.byte 0x00
	.byte 0x00
_081007FC:
	.4byte gRam
_08100800:
	.4byte 0x00000EE2
_08100804:
	.4byte 0x00000F02
_08100808:
	.4byte gUnknown_03002B98
_0810080C:
	.4byte gUnknown_03002BA4
_08100810:
	.4byte gUnknown_03002B99
_08100814:
	.4byte 0x00000975
_08100818:
	.4byte 0x0000096C
_0810081C:
	.4byte 0x0000096D
_08100820:
	.4byte gUnknown_03003E70
_08100824:
	.4byte 0x00000546
_08100828:
	mov r0, #213
	lsl r0, r0, #1
	bl sub_080C95C0
	mov r0, #1
_08100832:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0810072C

