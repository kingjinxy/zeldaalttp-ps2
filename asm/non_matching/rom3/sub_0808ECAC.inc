	THUMB_FUNC_START sub_0808ECAC
sub_0808ECAC: @ 0x0808ECAC
	push {r4,lr}
	sub sp, sp, #8
	mov r0, #239
	lsl r0, r0, #2
	bl sub_08092568
	ldr r1, _0808ED90  @ =gRam
	ldr r2, _0808ED94  @ =0x0000096C
	add r1, r1, r2
	strh r0, [r1]
	ldr r0, _0808ED98  @ =0x000038FC
	bl sub_0808B8B8
	ldr r0, _0808ED9C  @ =0x000003BE
	str r0, [sp, #4]
	mov r0, #228
	lsl r0, r0, #6
	str r0, [sp]
	add r4, sp, #4
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r0, _0808EDA0  @ =0x0000043C
	str r0, [sp, #4]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B9F8
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B9F8
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B9F8
	ldr r0, _0808EDA4  @ =0x000004BC
	str r0, [sp, #4]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B9F8
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B9F8
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B9F8
	ldr r1, _0808EDA8  @ =0x0000053C
	str r1, [sp, #4]
	ldr r0, _0808EDAC  @ =0x000027E8
	str r0, [sp]
	mov r2, #0
	bl sub_0808B71C
	ldr r0, [sp]
	ldr r1, [sp, #4]
	mov r2, #2
	bl sub_0808B71C
	ldr r0, [sp]
	ldr r1, [sp, #4]
	mov r2, #4
	bl sub_0808B71C
	ldr r1, _0808EDB0  @ =0x000005BC
	str r1, [sp, #4]
	ldr r0, _0808EDB4  @ =0x00002814
	str r0, [sp]
	mov r2, #0
	bl sub_0808B71C
	ldr r0, [sp]
	add r0, r0, #4
	str r0, [sp]
	ldr r1, [sp, #4]
	mov r2, #2
	bl sub_0808B71C
	ldr r0, _0808EDB8  @ =0x00002854
	str r0, [sp]
	ldr r1, [sp, #4]
	mov r2, #4
	bl sub_0808B71C
	mov r0, #74
	mov r1, #0
	bl sub_0812A324
	mov r0, #45
	mov r1, #0
	bl sub_0812A324
	mov r0, #120
	mov r1, #0
	bl sub_0812A324
	ldr r2, _0808EDBC  @ =gUnknown_020022DB
	ldrb r0, [r2]
	mov r1, #32
	orr r0, r0, r1
	strb r0, [r2]
	add sp, sp, #8
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808ED90:
	.4byte gRam
_0808ED94:
	.4byte 0x0000096C
_0808ED98:
	.4byte 0x000038FC
_0808ED9C:
	.4byte 0x000003BE
_0808EDA0:
	.4byte 0x0000043C
_0808EDA4:
	.4byte 0x000004BC
_0808EDA8:
	.4byte 0x0000053C
_0808EDAC:
	.4byte 0x000027E8
_0808EDB0:
	.4byte 0x000005BC
_0808EDB4:
	.4byte 0x00002814
_0808EDB8:
	.4byte 0x00002854
_0808EDBC:
	.4byte gUnknown_020022DB
	THUMB_FUNC_END sub_0808ECAC

